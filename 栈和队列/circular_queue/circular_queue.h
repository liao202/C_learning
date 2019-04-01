#pragma once

typedef int ElementType;

/*---循环队列---*/
typedef struct CircularQueue {
	size_t size;
	size_t capacity;
	size_t front;
	size_t rear;
	ElementType* cir_que;
} CircularQueue;

/*---初始化---*/
void cqInit(CircularQueue* cq, size_t capacity);

/*---释放---*/
void cqDestory(CircularQueue* cq);

/*---入队---*/
void cqPush(CircularQueue* cq, ElementType v);

/*---出队---*/
void cqPop(CircularQueue* cq);

/*---返回队首元素---*/
ElementType cqFront(CircularQueue* cq);

/*---返回队尾元素---*/
ElementType cqRear(CircularQueue* cq);

/*---判空---*/
int cqEmpty(CircularQueue* cq);

/*---判满---*/
int cqFull(CircularQueue* cq);