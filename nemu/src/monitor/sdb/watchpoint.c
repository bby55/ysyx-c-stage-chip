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

#include "sdb.h"

#define NR_WP 32

typedef struct watchpoint {
  int NO;
  struct watchpoint *next;
	char expression[320];
	unsigned int old_val;
	unsigned int new_val;
  /* TODO: Add more members if necessary */

} WP;

static WP wp_pool[NR_WP] = {};
static WP *head = NULL, *free_ = NULL;

void init_wp_pool() {
  int i;
  for (i = 0; i < NR_WP; i ++) {
    wp_pool[i].NO = i;
    wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]);
  }

  head = NULL;
  free_ = wp_pool;
}

/* TODO: Implement the functionality of watchpoint */
WP* new_wp(){
	WP *wp = NULL;
	 if (free_ == NULL) {
      printf("Error: 没有空闲的监视点\n");
			assert(0);
    }
	wp = free_;
	free_ = free_ -> next;
	wp -> next = head;
	head = wp;	
	return wp;
}

void free_wp(WP *wp){
	WP* h = head;
  if (h == wp){
	 	head = NULL;
	}
  else {
    while (h && h->next != wp){ 
			h = h->next;
	}
    assert(h);
    h->next = wp->next;
  }
  wp->next = free_;
  free_ = wp;
}

void display_watchpoint(){
	//int i;
	WP *h = head;
	while(h != NULL){
	//for(i = 0;i < NR_WP;i++){
	//	if(strlen(wp_pool[i].expression) > 0)
		if(strlen(h->expression)>0)
			printf("第%d个监视点:\n 表达式:%s\n 旧值为:%u\n 新值为:%u\n",h->NO,h->expression,h->old_val,h->new_val); 
		h = h->next;
	}

}

void delete_watchpoint(int NO){
	WP *h = head;
	WP *wp = NULL;
	while(h != NULL){
			h = h->next;
		if(h->NO == NO){
			wp = h;
			free_wp(wp);
		}
	}
	if(h == NULL){
			printf("找不到序号为%d的监视点",NO);
			assert(0);
	}
}

void create_watchpoint(char *args){
	WP *wp = new_wp();
	bool success = true;
	
	strncpy(wp->expression,args, sizeof(wp->expression)-1);
	wp -> old_val = expr(args,&success);
	if(success == true)
		printf("成功创建序号为%d的监视点\n",wp->NO);
	else
		printf("监视点创建失败，表达式不合法\n");
}


void update_watchpoint(){
	int i;
	bool success = true;
for(i = 0;i < NR_WP;i++){
		if(strlen(wp_pool[i].expression) > 0){
			wp_pool[i].new_val = expr(wp_pool[i].expression,&success);
		}	
}
}

void check_watchpoint(){
	int i;
	for(i = 0;i < NR_WP;i++){
		if(wp_pool[i].old_val != wp_pool[i].new_val){
			nemu_state.state = NEMU_STOP;
			printf("触发监视点，程序暂停\n");
			wp_pool[i].old_val = wp_pool[i].new_val;
	}
		//else{
		//	nemu_state.state = NEMU_RUNNING;
		//}
}
}
