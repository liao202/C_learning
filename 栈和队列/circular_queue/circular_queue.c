#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "circular_queue.h"

void cqInit(CircularQueue* cq, size_t capacity){
	assert(cq != NULL);
	cq->size = 0;
	cq->front = 0;
	cq->rear = 0;
	cq->capacity = capacity;
	cq->cir_que = (ElementType*)malloc(sizeof(ElementType)
		* cq->capacity);
	assert(cq->cir_que != NULL);
}

void cqDestory(CircularQueue* cq){
	assert(cq != NULL);
	free(cq->cir_que);
	cq->cir_que = NULL;
	cq->capacity = 0;
	cq->size = 0;
	cq->front = 0;
	cq->rear = 0;
}

void cqPush(CircularQueue* cq, ElementType v){
	assert(cq != NULL);
	if (cq->size >= cq->capacity){
		return;
	}
	cq->cir_que[cq->rear] = v;
	cq->rear = (cq->rear + 1) % (cq->capacity);
	++cq->size;
}

void cqPop(CircularQueue* cq){
	assert(cq != NULL);
	if (cq->size <= 0){
		return;
	}
	--cq->size;
	cq->front = (cq->front + 1) % (cq->capacity);
}

ElementType cqFront(CircularQueue* cq){
	assert(cq != NULL);
	if (cq->size <= 0){
		return -1;
	}
	return cq->cir_que[cq->front];
}

ElementType cqRear(CircularQueue* cq){
	assert(cq != NULL);
	if (cq->size <= 0){
		return -1;
	}
	size_t index = (cq->rear - 1 + cq->capacity) % cq->capacity;
	return cq->cir_que[index];
}

int cqEmpty(CircularQueue* cq){
	assert(cq != NULL);
	return cq->size == 0;
}

int cqFull(CircularQueue* cq){
	assert(cq != NULL);
	return cq->size == cq->capacity;
}