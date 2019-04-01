#pragma once

typedef int ElementType;

/*---ѭ������---*/
typedef struct CircularQueue {
	size_t size;
	size_t capacity;
	size_t front;
	size_t rear;
	ElementType* cir_que;
} CircularQueue;

/*---��ʼ��---*/
void cqInit(CircularQueue* cq, size_t capacity);

/*---�ͷ�---*/
void cqDestory(CircularQueue* cq);

/*---���---*/
void cqPush(CircularQueue* cq, ElementType v);

/*---����---*/
void cqPop(CircularQueue* cq);

/*---���ض���Ԫ��---*/
ElementType cqFront(CircularQueue* cq);

/*---���ض�βԪ��---*/
ElementType cqRear(CircularQueue* cq);

/*---�п�---*/
int cqEmpty(CircularQueue* cq);

/*---����---*/
int cqFull(CircularQueue* cq);