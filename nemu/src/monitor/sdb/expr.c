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

/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>
#include <stdlib.h>


word_t isa_reg_str2val(const char *s, bool *success);
word_t paddr_read(paddr_t addr, int len);

enum {
  TK_NOTYPE = 256, TK_NOR_EQ,TK_PLUS,TK_MINUS,TK_DOT,TK_DIV,TK_LFBKT,TK_RGBKT,TK_NUM,TK_AND,TK_EQ,TK_ADDR,TK_XNUM,TK_REG,TK_PTR


};

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {

  {" +", TK_NOTYPE},    // spaces
  {"\\+", TK_PLUS},         // plus
  {"==", TK_EQ},        // equal
	{"\\-",TK_MINUS},
	{"\\*",TK_DOT},
	{"\\/",TK_DIV},
	{"\\(",TK_LFBKT}, 
	{"\\)",TK_RGBKT}, 
	{"0x[a-zA-Z0-9]+",TK_XNUM}, 
	{"[0-9]+",TK_NUM}, 
	{"&&",TK_AND}, 
	{"!=",TK_NOR_EQ}, 
	{"\\$[a-z0-9]+",TK_REG},
};

#define NR_REGEX ARRLEN(rules)

static regex_t re[NR_REGEX] = {};

/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */
void init_regex() {
  int i;
  char error_msg[128];
  int ret;

  for (i = 0; i < NR_REGEX; i ++) {
    ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);
    if (ret != 0) {
      regerror(ret, &re[i], error_msg, 128);
      panic("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
    }
  }
}

typedef struct token {
  int type;
  char str[3200];
} Token;

static Token tokens[3200] __attribute__((used)) = {};
static int nr_token __attribute__((used))  = 0;

static bool make_token(char *e) {
  int position = 0;
  int i;
  regmatch_t pmatch;
  nr_token = 0;

  while (e[position] != '\0') {
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i ++) {
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {
        char *substr_start = e + position;
        int substr_len = pmatch.rm_eo;

        Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
            i, rules[i].regex, position, substr_len, substr_len, substr_start);

        position += substr_len;

			if(nr_token < 3200){
        switch (rules[i].token_type) {
					case TK_NOTYPE:
							break;
					case TK_EQ:
							tokens[nr_token].type =	TK_EQ; 
							strncpy(tokens[nr_token].str, "==", sizeof(tokens[nr_token].str));
							nr_token++;
							break;
					case TK_PLUS:
							tokens[nr_token].type =	TK_PLUS; 
							strncpy(tokens[nr_token].str, "+", sizeof(tokens[nr_token].str));
							nr_token++;
							break;
					case TK_MINUS:
							tokens[nr_token].type =	TK_MINUS; 
							strncpy(tokens[nr_token].str, "-", sizeof(tokens[nr_token].str));
							nr_token++;
							break;
					case TK_DOT:
							if (nr_token == 0 || tokens[nr_token  - 1].type == TK_PLUS || tokens[nr_token  - 1].type == TK_MINUS ||  tokens[nr_token  - 1].type == TK_EQ || tokens[nr_token  - 1].type == TK_DIV || tokens[nr_token  - 1].type == TK_DOT || tokens[nr_token  - 1].type == TK_NOR_EQ || tokens[nr_token  - 1].type == TK_AND || tokens[nr_token- 1].type == TK_LFBKT){
								tokens[nr_token].type = TK_PTR;
								break;
							}
							else{
								tokens[nr_token].type =	TK_DOT; 
								strncpy(tokens[nr_token].str, "0", sizeof(tokens[nr_token].str));
								strncpy(tokens[nr_token].str, "*", sizeof(tokens[nr_token].str));
								nr_token++;
								break;
							}
					case TK_DIV:
							tokens[nr_token].type =	TK_DIV; 
								strncpy(tokens[nr_token].str, "0", sizeof(tokens[nr_token].str));
							strncpy(tokens[nr_token].str, "/", sizeof(tokens[nr_token].str));
							nr_token++;
							break;
					case TK_LFBKT:
							tokens[nr_token].type =	TK_LFBKT; 
								strncpy(tokens[nr_token].str, "0", sizeof(tokens[nr_token].str));
							strncpy(tokens[nr_token].str, "(", sizeof(tokens[nr_token].str));
							nr_token++;
							break;
					case TK_RGBKT:
							tokens[nr_token].type =	TK_RGBKT; 
								strncpy(tokens[nr_token].str, "0", sizeof(tokens[nr_token].str));
							strncpy(tokens[nr_token].str, ")", sizeof(tokens[nr_token].str));
							nr_token++;
							break;
					case TK_NUM:
							if(tokens[nr_token].type == TK_PTR){
								strncpy(tokens[nr_token].str, "0", sizeof(tokens[nr_token].str));
								strncpy(tokens[nr_token].str, substr_start, substr_len);
								nr_token++;
								break;
							}
							else{
								tokens[nr_token].type =	TK_NUM; 
								strncpy(tokens[nr_token].str, "0", sizeof(tokens[nr_token].str));
								strncpy(tokens[nr_token].str, substr_start, substr_len);
								nr_token++;
								break;
							}
					case TK_AND:
							tokens[nr_token].type = TK_AND;
								strncpy(tokens[nr_token].str, "0", sizeof(tokens[nr_token].str));
							strncpy(tokens[nr_token].str, "&&" , sizeof(tokens[nr_token].str));
							nr_token++;
							break;
					case TK_NOR_EQ:
							tokens[nr_token].type = TK_NOR_EQ;
								strncpy(tokens[nr_token].str, "0", sizeof(tokens[nr_token].str));
							strncpy(tokens[nr_token].str, "!=" , sizeof(tokens[nr_token].str));
							nr_token++;
							break;
					case TK_XNUM:
							if(tokens[nr_token].type == TK_PTR){
								strncpy(tokens[nr_token].str, "0", sizeof(tokens[nr_token].str));
								strncpy(tokens[nr_token].str, substr_start, substr_len);
								nr_token++;
								break;
							}
							else{
								tokens[nr_token].type = TK_XNUM;
								strncpy(tokens[nr_token].str, "0", sizeof(tokens[nr_token].str));
								strncpy(tokens[nr_token].str, substr_start , substr_len);
								nr_token++;
								break;
							}
					case TK_REG:
							tokens[nr_token].type = TK_REG;
							strncpy(tokens[nr_token].str,substr_start,substr_len);
							nr_token++;
							break;
          default: printf("No rules is com.\n");
                        break;
        }
				}
        break;
      }
    }

    if (i == NR_REGEX) {
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }
  }

  return true;
}

	word_t select_main_token(int p, int q){
		int Tokens_DD[3200] = {};	
		int Tokens_PM[3200] = {};
		int Tokens_OP[3200] = {};
		int Tokens_LG[3200] = {};
		int seal =0;
		int i = 0;
		int j = 0;
		int m = 0;
		int n = 0;
		int x = 0;
		int y = 0;
		int z = 0;
		 for (; p <= q; p++) {
			if (tokens[p].type == TK_PLUS || tokens[p].type == TK_DIV || tokens[p].type == TK_DOT || tokens[p].type == TK_MINUS || tokens[p].type == TK_EQ ||tokens[p].type == TK_NOR_EQ ||tokens[p].type == TK_AND || tokens[p].type == TK_LFBKT || tokens[p].type == TK_RGBKT){
					if((tokens[p].type == TK_DOT || tokens[p].type == TK_DIV) && seal == 0){
						if(i < 3200){
						Tokens_DD[i] = p;
						i++;
						}
					}
					if((tokens[p].type == TK_PLUS|| tokens[p].type == TK_MINUS) && seal == 0){
						if(j < 3200){
						Tokens_PM[j] = p;
						j++;
						}
					}
					if((tokens[p].type == TK_AND|| tokens[p].type == TK_NOR_EQ  || tokens[p].type == TK_EQ) && seal == 0){
						if(m < 3200){
							Tokens_LG[m] = p;
							m++;
					}
					}
					if(tokens[p].type == TK_LFBKT || seal == 1){
						seal = 1;
					}
					if(tokens[p].type == TK_RGBKT){
						seal = 0;
					}
			}
		}
	  int lenth1 = i;
	  int lenth2 = j;
		int lenth3 = m;
		int s = 0;
	for(n = 0; n < lenth1 + lenth2 + lenth3; n++){
		if(lenth1 != 0 && x < lenth1){
			Tokens_OP[n] = Tokens_DD[x];	
			x++;
			s++;
		}
		else if(lenth2 != 0 && x == lenth1 && y < lenth2 ){
			Tokens_OP[n] = Tokens_PM[y];
			y++;
			s++;
		}
		else if(lenth3 != 0 && x == lenth1 && y == lenth2 && z < lenth3){
			Tokens_OP[n] = Tokens_LG[z];
			z++;
			s++;
		}
		else
			break;
	}
	int OP;
	OP = Tokens_OP[s-1];	
	return OP;	
	}



bool check_expr_parentheses(int p, int q){
  int i;
  int top = -1;
  bool seal = true;
 
  for (i = p; i <= q ; i++){
    if (tokens[i].type == TK_LFBKT){
        top++;
    } else if (tokens[i].type == TK_RGBKT){    
      if (top >= 0){
        top--;          
      } else {
        seal = false;
        break;
      }
    }
  }
  if (top < 0 && seal == true){
    seal = true;
  } else {
    seal = false;
  }
  return seal;
}
 
bool check_parentheses(int p, int q){
  if (tokens[p].type == TK_LFBKT && tokens[q].type == TK_RGBKT){
    return check_expr_parentheses(p + 1, q - 1);
  }
  return false;
}

int temp;
char REG[3];
word_t eval(int p, int q) {
		if (p > q){ 
			/* Bad expression */
			printf("菜就多练");
			assert(0);
			return 0;
		}
		else if (p == q) {
			if(tokens[p].type == TK_NUM){
				return atoi(tokens[p].str);	
			}
			else if(tokens[p].type == TK_XNUM){
				return strtoul(tokens[p].str, NULL, 16);
			}
			else if(tokens[p].type == TK_REG){
				bool success = true;
				REG[0] = tokens[p].str[1];
				REG[1] = tokens[p].str[2];
				temp = isa_reg_str2val(REG,&success);
				return temp;
			}
			else if(tokens[p].type == TK_PTR){
					long addr =strtol(tokens[p].str,NULL,16);
					return paddr_read(addr,4);
			}	
			else{
				printf("格式错误，程序退出");
				assert(0);
			/* Single token.
			* For now this token should be a number.
			* Return the value of the number.
			*/
			}
		}
		else if (check_parentheses(p, q) == true) {
    /* The expression is surrounded by a matched pair of parentheses.
     * If that is the case, just throw away the parentheses.
     */
			return eval(p + 1, q - 1);
		}
		else {
			int op = select_main_token(p,q);
			int val1 = eval(p, op - 1);
			int val2 = eval(op + 1, q);

			switch (tokens[op].type) {
				case TK_PLUS: return val1 + val2;
				case TK_MINUS:	return val1 - val2; 
				case TK_DOT:	return val1 * val2; 
				case TK_DIV:
										if(val2 == 0){
											printf("表达式错误，出现除0行为\n");	
											assert(0);}
										else
											return val1 / val2; 
				case TK_EQ:   return val1 == val2;
				case TK_NOR_EQ:	return val1 != val2;
				case TK_AND:	return val1 && val2;
				default: 
									printf("Unexpected token type: %d\n", tokens[op].type);
									assert(0);
									return 0;
			}
		}
		return 0;
	}	
word_t expr(char *e, bool *success) {
  if (!make_token(e)) {
    *success = false;
    return 0;
  }
	int p = 0;
	int q = nr_token - 1; 
	word_t result = eval(p,q);	


  /* TODO: Insert codes to evaluate the expression. */
//  TODO();

  return result;
}
