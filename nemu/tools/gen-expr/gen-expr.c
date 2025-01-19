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

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include <string.h>

// this should be enough
static char buf[65536] = {};
static char code_buf[65536 + 128] = {}; // a little larger than `buf`
static char *code_format =
"#include <stdio.h>\n"
"int main() { "
"  unsigned result = %s; "
"  printf(\"%%u\", result); "
"  return 0; "
"}";

int choose(int n) {
    return rand() % n;
}


int gen_num(){
	return rand() % 100;
}

int space = 0;
void gen_space(){
	switch(choose(2)){
		case 0: 
			strcat(buf, " "); 
			space = 1;
		}
}
char gen_rand_op(){
	switch(choose(4)){
		case 0: return '+';
		case 1: return '-';
		case 2: return '*';
		case 3: return '/';
		default: return 0;
	}
}
int num = 0;
int lbkt = 0;
int rbkt = 0;
int opp = 0;
int count = 0;
int nums = 1;
int MAXCOUNT;
void gen_rand_expr() {
	if(count >= MAXCOUNT){
		return;
	}
  switch (choose(3)) {
    case 0: 
			if(rbkt != 1 && nums != 0 && space != 1){
			nums = gen_num();
			sprintf(buf + strlen(buf), "%d", nums);
			gen_space();
			space = 1;
			num = 1;
			lbkt = 0;
			opp = 0;
			count++;
			gen_rand_expr();
			break;
			}
    case 1:
			if(num != 1 && lbkt != 1){
				gen_space();
				strcat(buf, "(");
				space = 0;
				lbkt = 1;
				nums = 1;
				num = 0;
				opp = 0;
				rbkt = 0;
				gen_rand_expr(); 
				strcat(buf, ")");
				space = 0;
				rbkt = 1;
				lbkt = 0;
				nums = 1;
				num = 0;
				opp = 0;
				gen_rand_expr();
				break;
			}
    default:
			 if (num == 1 || rbkt == 1) {
					gen_space();
          char op = gen_rand_op(); 
          sprintf(buf + strlen(buf), " %c ", op);
					space = 0;
					opp = 1;
					num = 0;
					nums = 1;
					lbkt = 0;
					gen_rand_expr();
					break;
			}
			 else{
				 gen_rand_expr();
					break;
			 }
	}
}

int main(int argc, char *argv[]) {
  int seed = time(0);
  srand(seed);
  int loop = 1;
  if (argc > 1) {
    sscanf(argv[1], "%d", &loop);
  }
  int i;
  for (i = 0; i < loop; i ++) {
		 buf[0] = '\0';
		 space = 0;
		 num = 0;
		 nums = 1;
		 lbkt = 0;
		 rbkt = 0;
		 opp = 0;
		 count = 0;
		MAXCOUNT = rand()%10 + 1;
    gen_rand_expr();

    sprintf(code_buf, code_format, buf);

    FILE *fp = fopen("/tmp/.code.c", "w");
    assert(fp != NULL);
    fputs(code_buf, fp);
    fclose(fp);

    int ret = system("gcc /tmp/.code.c -Wall -Werror -o /tmp/.expr 2>/dev/null");
    if (ret != 0) continue;

    fp = popen("/tmp/.expr", "r");

    assert(fp != NULL);

    unsigned int result;
    ret = fscanf(fp, "%u", &result);
    pclose(fp);

    printf("%u@%s\n", result, buf);
	}  
  return 0;
}
