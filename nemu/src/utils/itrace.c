#include <common.h>
#include <utils.h>
#include <cpu/cpu.h>
#include <isa.h>
#define IRINGBUF_LEN  16
/*
char *pHead = NULL;			//环形缓冲区首地址
char *pValidRead = NULL;	//已使用环形缓冲区首地址
char *pValidWrite = NULL;	//已使用环形缓冲区尾地址
char *pTail = NULL;			//环形缓冲区尾地址

void init_iringbuf(){
    if(pHead == NULL){
        pHead = (char*)(iringbuf * sizeof(char))
    }

    memset(pHead, 0 , sizeof(IRINGBUF_LEN)); //申请内存清0
	
	pValidRead = pHead;
	pValidWrite = pHead;
	pTail = pHead + IRINGBUF_LEN;  
}

void FreeRingBuff()
{
	if(NULL != pHead)
	{
		free(pHead);
	}
}

void Write_iringbuf( , int DATA_LENTH){
    if(NULL == pHead){
        printf("NO INIT IRINGBUF!!!\n");
        return -1;
    }

    if(DATA_LENTH > pTail - pHead){
        printf("DATA LENGTH TOO LONG!!!\n");
        return -1;
    }

    


    
}
*/

typedef struct iringbuf
{
    vaddr_t pc[IRINGBUF_LEN];
    uint32_t inst[IRINGBUF_LEN];
    //uint32_t read_count;
    uint32_t write_count;
}iringbuf_t;

iringbuf_t iringbuf;

void iringbuf_write(vaddr_t pc, uint32_t inst){
    if(iringbuf.write_count >= IRINGBUF_LEN){
        iringbuf.write_count = 0;
    }

    iringbuf.pc[iringbuf.write_count] = pc;
    iringbuf.inst[iringbuf.write_count] = inst;
    iringbuf.write_count++;
}

void iringbuf_display(){
    for(int i = 0; i < IRINGBUF_LEN; i++){
        printf("    0x%x: %x\n", iringbuf.pc[i], iringbuf.inst[i]);
    }

}


void itrace(){
    #ifdef CONFIG_ITRACE
    while(nemu_state.state != NEMU_ABORT){
        iringbuf_write(cpu->pc,cpu->inst);
    }

    iringbuf_display();

    #endif
}