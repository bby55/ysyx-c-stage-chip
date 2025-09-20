/***************************************************************************************
* Copyright (c) 2014-2024 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <isa.h>
#include <memory/paddr.h>
#include <elf.h>
#include <symbol.h>

symbol_table *symbol_tables = NULL;    // 初始化为空指针（未解析ELF时无符号表）
size_t symbol_tables_size = 0;         // 初始化为0（无符号时大小为0）

const char *nemu_logo =
"\n"
"███╗   ██╗███████╗███╗   ███╗██╗   ██╗\n"
"████╗  ██║██╔════╝████╗ ████║██║   ██║\n"
"██╔██╗ ██║█████╗  ██╔████╔██║██║   ██║\n"
"██║╚██╗██║██╔══╝  ██║╚██╔╝██║██║   ██║\n"
"██║ ╚████║███████╗██║ ╚═╝ ██║╚██████╔╝\n"
"╚═╝  ╚═══╝╚══════╝╚═╝     ╚═╝ ╚═════╝ ";
void init_rand();
void init_log(const char *log_file);
void init_mem();
void init_difftest(char *ref_so_file, long img_size, int port);
void init_device();
void init_sdb();
void init_disasm();

static void welcome() {
  Log("Trace: %s", MUXDEF(CONFIG_TRACE, ANSI_FMT("ON", ANSI_FG_GREEN), ANSI_FMT("OFF", ANSI_FG_RED)));
  IFDEF(CONFIG_TRACE, Log("If trace is enabled, a log file will be generated "
        "to record the trace. This may lead to a large log file. "
        "If it is not necessary, you can disable it in menuconfig"));
  Log("Build time: %s, %s", __TIME__, __DATE__);
  printf("\033[1;32m%s\033[0m\n", nemu_logo);
  printf("Welcome to %s-NEMU!\n", ANSI_FMT(str(__GUEST_ISA__), ANSI_FG_YELLOW ANSI_BG_RED));
  printf("For help, type \"help\"\n");
  
  assert(1);
}

#ifndef CONFIG_TARGET_AM
#include <getopt.h>

void sdb_set_batch_mode();

static char *log_file = NULL;
static char *diff_so_file = NULL;
static char *img_file = NULL;
static char *elf_file = NULL;
static int difftest_port = 1234;

static long load_img() {
  if (img_file == NULL) {
    Log("No image is given. Use the default build-in image.");
    return 4096; // built-in image size
  }

  FILE *fp = fopen(img_file, "rb");
  Assert(fp, "Can not open '%s'", img_file);

  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);

  Log("The image is %s, size = %ld", img_file, size);

  fseek(fp, 0, SEEK_SET);
  int ret = fread(guest_to_host(RESET_VECTOR), size, 1, fp);
  assert(ret == 1);

  fclose(fp);
  return size;
}

static int parse_args(int argc, char *argv[]) {
  const struct option table[] = {
    {"batch"    , no_argument      , NULL, 'b'},
    {"log"      , required_argument, NULL, 'l'},
    {"diff"     , required_argument, NULL, 'd'},
    {"port"     , required_argument, NULL, 'p'},
    {"help"     , no_argument      , NULL, 'h'},
    {"elf"      , required_argument, NULL, 'e'},
    {0          , 0                , NULL,  0 },
  };
  int o;
  while ( (o = getopt_long(argc, argv, "-bhl:d:p:e:", table, NULL)) != -1) {
    switch (o) {
      case 'b': sdb_set_batch_mode(); break;
      case 'p': sscanf(optarg, "%d", &difftest_port); break;
      case 'l': log_file = optarg; break;
      case 'd': diff_so_file = optarg; break;
      case 1: img_file = optarg; return 0;
      case 'e': elf_file = optarg; break;
      default:
        printf("Usage: %s [OPTION...] IMAGE [args]\n\n", argv[0]);
        printf("\t-b,--batch              run with batch mode\n");
        printf("\t-l,--log=FILE           output log to FILE\n");
        printf("\t-d,--diff=REF_SO        run DiffTest with reference REF_SO\n");
        printf("\t-p,--port=PORT          run DiffTest with port PORT\n");
        printf("\t-e,--elf=FILE           load ELF file for symbol resolution\n");
        printf("\n");
        exit(0);
    }
  }
  return 0;
}
void analysis_elf(const char* elf_file);

void init_monitor(int argc, char *argv[]) {
  /* Perform some global initialization. */

  /* Parse arguments. */
  parse_args(argc, argv);

  analysis_elf(elf_file);
  /* Set random seed. */
  init_rand();

  /* Open the log file. */
  init_log(log_file);

  /* Initialize memory. */
  init_mem();

  /* Initialize devices. */
  IFDEF(CONFIG_DEVICE, init_device());

  /* Perform ISA dependent initialization. */
  init_isa();

  /* Load the image to memory. This will overwrite the built-in image. */
  long img_size = load_img();

  /* Initialize differential testing. */
  init_difftest(diff_so_file, img_size, difftest_port);

  /* Initialize the simple debugger. */
  init_sdb();

  IFDEF(CONFIG_ITRACE, init_disasm());

  /* Display welcome message. */
  welcome();
}
#else // CONFIG_TARGET_AM
static long load_img() {
  extern char bin_start, bin_end;
  size_t size = &bin_end - &bin_start;
  Log("img size = %ld", size);
  memcpy(guest_to_host(RESET_VECTOR), &bin_start, size);
  return size;
}

void am_init_monitor() {
  init_rand();
  init_mem();
  init_isa();
  load_img();
  IFDEF(CONFIG_DEVICE, init_device());
  welcome();
}
#endif


void analysis_elf(const char *elf_path) {
    // 若未指定ELF文件，直接返回
    if (elf_path == NULL) return;

    // 打开目标ELF文件，以二进制只读模式
    FILE *elf_stream = fopen(elf_path, "rb");
    Assert(elf_stream, "Failed to open ELF file: %s", elf_path);

    // 读取ELF文件头部信息
    Elf32_Ehdr elf_hdr;
    if (!fread(&elf_hdr, sizeof(Elf32_Ehdr), 1, elf_stream)) {
        fclose(elf_stream);
        fprintf(stderr, "Failed to read ELF header\n");
        exit(EXIT_FAILURE);
    }

    // 验证ELF文件标识（魔数检查）
    if (memcmp(elf_hdr.e_ident, ELFMAG, SELFMAG) != 0) {
        fclose(elf_stream);
        fprintf(stderr, "Invalid ELF file format\n");
        exit(EXIT_FAILURE);
    }

    // 定位并读取字符串表节头（.strtab）
    Elf32_Shdr strtab_hdr;
    fseek(elf_stream, elf_hdr.e_shoff, SEEK_SET); // 移动到节头表起始位置
    int found_strtab = 0;
    for (int i = 0; i < elf_hdr.e_shnum; i++) {
        if (!fread(&strtab_hdr, sizeof(Elf32_Shdr), 1, elf_stream)) {
            fclose(elf_stream);
            exit(EXIT_FAILURE);
        }
        if (strtab_hdr.sh_type == SHT_STRTAB) { // 找到字符串表
            found_strtab = 1;
            break;
        }
    }
    if (!found_strtab) {
        fclose(elf_stream);
        fprintf(stderr, "No string table found in ELF\n");
        exit(EXIT_FAILURE);
    }

    // 加载字符串表内容到内存
    char *str_table = malloc(strtab_hdr.sh_size);
    fseek(elf_stream, strtab_hdr.sh_offset, SEEK_SET);
    if (!fread(str_table, strtab_hdr.sh_size, 1, elf_stream)) {
        fclose(elf_stream);
        free(str_table);
        exit(EXIT_FAILURE);
    }

    // 定位并读取符号表节头（.symtab）
    Elf32_Shdr symtab_hdr;
    fseek(elf_stream, elf_hdr.e_shoff, SEEK_SET); // 重新定位到节头表
    int found_symtab = 0;
    for (int i = 0; i < elf_hdr.e_shnum; i++) {
        if (!fread(&symtab_hdr, sizeof(Elf32_Shdr), 1, elf_stream)) {
            fclose(elf_stream);
            free(str_table);
            exit(EXIT_FAILURE);
        }
        if (symtab_hdr.sh_type == SHT_SYMTAB) { // 找到符号表
            found_symtab = 1;
            break;
        }
    }
    if (!found_symtab) {
        fclose(elf_stream);
        free(str_table);
        fprintf(stderr, "No symbol table found in ELF\n");
        exit(EXIT_FAILURE);
    }

    // 解析符号表并提取函数符号
    size_t sym_count = symtab_hdr.sh_size / symtab_hdr.sh_entsize; // 符号总数
    symbol_tables = malloc(sym_count * sizeof(symbol_table)); // 分配符号表内存
    Assert(symbol_tables, "Memory allocation failed for symbol tables");

    fseek(elf_stream, symtab_hdr.sh_offset, SEEK_SET); // 定位到符号表起始位置
    Elf32_Sym curr_sym; // 当前解析的符号

    for (size_t i = 0; i < sym_count; i++) {
        // 读取单个符号信息
        if (!fread(&curr_sym, sizeof(Elf32_Sym), 1, elf_stream)) {
            fclose(elf_stream);
            free(str_table);
            free(symbol_tables);
            exit(EXIT_FAILURE);
        }

        // 筛选出有效的函数符号（类型为函数且大小非零）
        if (ELF32_ST_TYPE(curr_sym.st_info) == STT_FUNC && curr_sym.st_size != 0) {
            const char *sym_name = str_table + curr_sym.st_name; // 从字符串表获取符号名
            // 存储符号信息（截断过长名称以避免溢出）
            strncpy(symbol_tables[i].name, sym_name, sizeof(symbol_tables[i].name) - 1);
            symbol_tables[i].addr = curr_sym.st_value;  // 函数起始地址
            symbol_tables[i].info = curr_sym.st_info;   // 符号类型信息
            symbol_tables[i].size = curr_sym.st_size;   // 函数大小
        }
    }

    symbol_tables_size = sym_count; // 记录符号总数

    // 清理资源
    fclose(elf_stream);
    free(str_table);
}