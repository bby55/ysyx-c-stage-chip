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
enum {
  TK_NOTYPE = 256, TK_EQ,TK_PLUS,TK_MINUS,TK_DOT,TK_DIV,TK_LFBKT,TK_RGBKT,TK_NUM,TK_AND,TK_NOR_EQ,TK_ADDR,TK_XNUM,TK_REG

  /* TODO: Add more token types */

};

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {

  /* TODO: Add more rules.
   * Pay attention to the precedence level of different rules.
   */

  {" +", TK_NOTYPE},    // spaces
  {"\\+", TK_PLUS},         // plus
  {"==", TK_EQ},        // equal
	{"\\-",TK_MINUS},
	{"\\*",TK_DOT},
	{"\\/",TK_DIV},
	{"\\(",TK_LFBKT},
	{"\\)",TK_RGBKT},
	{"[0-9]+",TK_NUM},
	{"&&",TK_AND},
	{"!=",TK_NOR_EQ},
	{"0x[a-zA-Z0-9]+",TK_XNUM},
	{"\\$[a-z0-9]+",TK_REG},
	{"\\*",TK_ADDR},
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
  char str[320];
} Token;

static Token tokens[320] __attribute__((used)) = {};
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

        /* TODO: Now a new token is recognized with rules[i]. Add codes
         * to record the token in the array `tokens'. For certain types
         * of tokens, some extra actions should be performed.
         */
			if(nr_token < 320){
        switch (rules[i].token_type) {
					case TK_EQ:
							tokens[nr_token].type =	TK_EQ; 
							strncpy(tokens[nr_token].str, "=", sizeof(tokens[nr_token].str));
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
							tokens[nr_token].type =	TK_DOT; 
							strncpy(tokens[nr_token].str, "*", sizeof(tokens[nr_token].str));
							nr_token++;
							break;
					case TK_DIV:
							tokens[nr_token].type =	TK_DIV; 
							strncpy(tokens[nr_token].str, "/", sizeof(tokens[nr_token].str));
							nr_token++;
							break;
					case TK_LFBKT:
							tokens[nr_token].type =	TK_LFBKT; 
							strncpy(tokens[nr_token].str, "(", sizeof(tokens[nr_token].str));
							nr_token++;
							break;
					case TK_RGBKT:
							tokens[nr_token].type =	TK_RGBKT; 
							strncpy(tokens[nr_token].str, ")", sizeof(tokens[nr_token].str));
							nr_token++;
							break;
					case TK_NUM:
							tokens[nr_token].type =	TK_NUM; 
							strncpy(tokens[nr_token].str, substr_start, substr_len);
							nr_token++;
							break;
					case TK_AND:
							tokens[nr_token].type = TK_AND;
							strncpy(tokens[nr_token].str, "&&" , sizeof(tokens[nr_token].str));
							nr_token++;
					case TK_NOR_EQ:
							tokens[nr_token].type = TK_NOR_EQ;
							strncpy(tokens[nr_token].str, "!=" , sizeof(tokens[nr_token].str));
							nr_token++;
					case TK_XNUM:
							tokens[nr_token].type = TK_XNUM;
							strncpy(tokens[nr_token].str, substr_start , substr_len);
							nr_token++;
					case TK_REG:
							tokens[nr_token].type = TK_REG;
							strncpy(tokens[nr_token].str, "$" , sizeof(tokens[nr_token].str));
							nr_token++;
					case TK_ADDR:
							tokens[nr_token].type = TK_ADDR;
							strncpy(tokens[nr_token].str, "*" , sizeof(tokens[nr_token].str));
							nr_token++;
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
		int Tokens_DD[320] = {};	
		int Tokens_PM[320] = {};
		int Tokens_OP[320] = {};
		int Tokens_LG[320] = {};
		int i = 0;
		int j = 0;
		int m = 0;
		int n = 0;
		int x = 0;
		int y = 0;
		int z = 0;
		for(;p < q;p++){
			if (tokens[p].type == TK_PLUS || tokens[p].type == TK_DIV || tokens[p].type == TK_DOT || tokens[p].type == TK_MINUS || tokens[p].type == TK_EQ ||tokens[p].type == TK_NOR_EQ ||tokens[p].type == TK_AND ){
					if(tokens[p].type == TK_DOT || tokens[p].type == TK_DIV){
						if(i < 320){
						Tokens_DD[i] = p;
						i++;
						}
					}
					if(tokens[p].type == TK_PLUS || tokens[p].type == TK_MINUS){
						if(j < 320){
						Tokens_PM[j] = p;
						j++;
						}
					}
					if(tokens[p].type == TK_AND || tokens[p].type == TK_NOR_EQ || tokens[p].type == TK_EQ){
						if(m < 320){
							Tokens_LG[z] = p;
							m++;
					}
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
  int stack_top = -1;
  bool flag = true;
 
  for (i = p; i <= q ; i++){
    if (tokens[i].type == TK_LFBKT){
        stack_top++;
    } else if (tokens[i].type == TK_RGBKT){    
      if (stack_top >= 0){
        stack_top--;          
      } else {
        flag = false;
        break;
      }
    }
  }
  if (stack_top < 0 && flag == true){
    flag = true;
  } else {
    flag = false;
  }
  return flag;
}
 
bool check_parentheses(int p, int q){
  if (tokens[p].type == TK_LFBKT && tokens[q].type == TK_RGBKT){
    return check_expr_parentheses(p + 1, q - 1);
  }
  return false;
}


word_t eval(int p, int q) {
		if (p > q){ 
			/* Bad expression */
			printf("菜就多练");
			//assert(0);
			return 0;
		}
		else if (p == q) {
			if(tokens[p].type == TK_NUM){
				return atoi(tokens[p].str);	
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
			printf("TRUE");
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
				case TK_DIV:	return val1 / val2; 
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
