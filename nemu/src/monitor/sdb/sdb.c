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
#include <stdio.h>
#include <isa.h>
#include <cpu/cpu.h>
#include <readline/readline.h>
#include <readline/history.h>
#include "sdb.h"
#include <stdlib.h>
#include <string.h>


static int is_batch_mode = false;
word_t paddr_read(paddr_t addr, int len);
void init_regex();
void init_wp_pool();

/* We use the `readline' library to provide more flexibility to read from stdin. */
static char* rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(nemu) ");

  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;
}

void isa_reg_display(void);

static int cmd_c(char *args) {
  cpu_exec(-1);
  return 0;
}


static int cmd_q(char *args) {
	nemu_state.state = NEMU_QUIT;
  return -1;
}

static int cmd_help(char *args);

static int cmd_si(char *args){
	int i;
	if(args == NULL)
		cpu_exec(1);
	else{
		i = atoi(args);
		cpu_exec(i);
	}
	return 0;
}

static int cmd_info(char *args){
	if(args == NULL){
		printf("Please input info r or info w\n");
		return 0;
	}
	if(strcmp(args,"r")==0)
	 isa_reg_display();
	return 0;
}

static int cmd_x(char *args){
	int i = 0;
	int N = atoi(strtok(args, " "));
	long addr =strtol(strtok(NULL," "),NULL,16);
	for(i = 0 ; i < N ; i++){
		printf("0x%lx:\n	0x%.8x\n",addr,paddr_read(addr,4));//addr len
    addr = addr + 4;
	}
	return 0;
}


static int cmd_p(char *args){
	//printf("%d\n",make_token(args));
  bool success = true;

  if (args == NULL) {
    printf("No expression provided\n");
    return 0;
  }

  word_t result1 = expr(args, &success);

  if (success) {
    printf("Result:  %u\n", result1);
  } else {
    printf("Expression evaluation failed\n");
  }

  return 0;
}	
static struct {
  const char *name;
  const char *description;
  int (*handler) (char *);
} cmd_table [] = {
  { "help", "Display information about all supported commands", cmd_help },
  { "c", "Continue the execution of the program", cmd_c },
  { "q", "Exit NEMU", cmd_q },
	{ "si","Execute the program",cmd_si},
	{ "info","Printf the reg or monitor",cmd_info},
	{ "x","scan the pmem",cmd_x},
	{ "p","test",cmd_p}
  /* TODO: Add more commands */

};

#define NR_CMD ARRLEN(cmd_table)

static int cmd_help(char *args) {
  /* extract the first argument */
  char *arg = strtok(NULL, " ");
  int i;

  if (arg == NULL) {
    /* no argument given */
    for (i = 0; i < NR_CMD; i ++) {
      printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
    }
  }
  else {
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(arg, cmd_table[i].name) == 0) {
        printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
        return 0;
      }
    }
    printf("Unknown command '%s'\n", arg);
  }
  return 0;
}

void sdb_set_batch_mode() {
  is_batch_mode = true;
}

void sdb_mainloop() {
  if (is_batch_mode) {
    cmd_c(NULL);
    return;
  }

  for (char *str; (str = rl_gets()) != NULL; ) {
    char *str_end = str + strlen(str);

    /* extract the first token as the command */
    char *cmd = strtok(str, " ");
    if (cmd == NULL) { continue; }

    /* treat the remaining string as the arguments,
     * which may need further parsing
     */
    char *args = cmd + strlen(cmd) + 1;
    if (args >= str_end) {
      args = NULL;
    }

#ifdef CONFIG_DEVICE
    extern void sdl_clear_event_queue();
    sdl_clear_event_queue();
#endif

    int i;
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(cmd, cmd_table[i].name) == 0) {
        if (cmd_table[i].handler(args) < 0) { return; }
        break;
      }
    }

    if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }
  }
}

	int pass_count;
void test_expr() {
  FILE *fp = fopen("/home/ysyxbby/ysyx-workbench/nemu/tools/gen-expr/input", "r");
  if (fp == NULL) perror("test_expr error");

  char *e = NULL;
  word_t correct_res;
  size_t len = 0;
  ssize_t read;
  bool success = false;

  /*while (true) {
    if(fscanf(fp, "%u ", &correct_res) == -1) break;
    read = getline(&e, &len, fp);
    e[read-1] = '\0';
    
    word_t res = expr(e, &success);
    
    assert(success);
    if (res != correct_res) {
      puts(e);
      printf("expected: %u, got: %u\n", correct_res, res);
      assert(0);
    }
  }

  fclose(fp);
  if (e) free(e);

  Log("expr test pass");
	*/
	while (true) {
    // 读取预期结果
    if (fscanf(fp, "%u", &correct_res) != 1) {
        break;  // 文件读取结束或格式错误
    }

    // 打印调试信息
    printf("correct_res: %u\n", correct_res);

    // 读取表达式
    read = getline(&e, &len, fp);
    if (read == -1) {
        printf("test_expr error: failed to read expression\n");
        break;  // 读取失败
    }

    // 去掉行末的换行符
    if (e[read - 1] == '\n') {
        e[read - 1] = '\0';
    }

    // 打印调试信息
		char *rubbish = strchr(e, '@');
		char *expression = rubbish + 2; 
    printf("expression: %s\n", expression);
    // 调用 expr() 函数求值
    word_t res = expr(expression, &success);

    // 检查 success 标志
    if (!success) {
        printf("test_expr error: expr() failed for expression: %s\n", e);
        assert(0);  // 终止程序
    }

    // 比较结果
    if (res != correct_res) {
        printf("test_expr error: expression: %s\n", e);
        printf("expected: %u, got: %u\n", correct_res, res);
        assert(0);  // 终止程序
    }

    pass_count++;  // 增加通过数
}
}

void init_sdb() {
  /* Compile the regular expressions. */
  init_regex();
  /* test math expression calculation */
  test_expr();
	printf("通过测试数:%d",pass_count);
  /* Initialize the watchpoint pool. */
  init_wp_pool();
}
