#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>
#include "circular_queue.h"

void cqInit(CircularQueue* cq, int size){
	assert(cq != NULL);

	cq->front = 0;
	cq->rear = 0;
	cq->max_size = size;
	cq->cir_que = (ElementType*)malloc(sizeof(ElementType) 
			* cq->max_size);
	assert(cq->cir_que != NULL);
}

void cqDestroy(CircularQueue* cq){
	assert(cq != NULL);

	cq->front = 0;
	cq->rear = 0;
	cq->max_size = 0;
	free(cq->cir_que);
	cq->cir_que = NULL;
}

bool isEmpty(const CircularQueue* cq){
	assert(cq != NULL);

	return cq->front == cq->rear;
}

bool isFull(const CircularQueue* cq){
	assert(cq != NULL);

	return (cq->rear + 1) % cq->max_size == cq->front;
}

bool Push(CircularQueue* cq, ElementType val){
	assert(cq != NULL);

	if(isFull(cq)){
		return false;
	}
	cq->cir_que[cq->rear] = val;
	cq->rear = (cq->rear + 1) % cq->max_size;
	return true;
}

bool Pop(CircularQueue* cq){
	assert(cq != NULL);

	if(isEmpty(cq)){
		return false;
	}

	cq->front = (cq->front + 1) % cq->max_size;
	return true;
}

ElementType Front(CircularQueue* cq){
	assert(cq != NULL);

	if(!isEmpty(cq)){
		ElementType ret = cq->cir_que[cq->front];
		Pop(cq);
		return ret;
	}

	return -1;
}

void cqDisplay(const CircularQueue* cq){
	int i;

	printf("The circular queue is below: \n");
	for(i = cq->front; i < cq->rear; (++i) % cq->max_size){
		printf("%d ", cq->cir_que[i]);
	}
	printf("\n");
}

void cqTest(){
	CircularQueue cq;

	cqInit(&cq, 10);

	Push(&cq, 3);
	Push(&cq, 5);
	Push(&cq, 7);
	Push(&cq, 9);
	Push(&cq, 11);
	Push(&cq, 13);
	Pop(&cq);

	cqDisplay(&cq);
}

int main(){

	cqTest();

	return 0;
}
