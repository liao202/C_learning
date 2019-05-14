#pragma once

typedef int ElementType;

typedef struct CircularQueue{
	ElementType* cir_que;
	int front;
	int rear;
	int max_size;
} CircularQueue;

/* 初始化 */
void cqInit(CircularQueue* cq, int size);

/* 释放 */
void cqDestroy(CircularQueue* cq);

/* 判空 */
bool isEmpty(const CircularQueue* cq);

/* 队满 */
bool isFull(const CircularQueue* cq);

/* 入队 */
bool Push(CircularQueue* cq, ElementType val);

/* 出队 */
bool Pop(CircularQueue* cq);

/* 队首 */
ElementType Front(CircularQueue* cq);

/* 打印 */
void cqDisplay(const CircularQueue* cq);

/* 测试 */
void cqTest();
