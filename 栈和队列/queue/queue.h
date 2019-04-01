#pragma once

typedef int ElementType;

/*---���н��---*/
typedef struct Node 
{
	ElementType value;
	struct Node* next;
} Node;

/*---����---*/
typedef struct Queue 
{
	Node* front;
} Queue;

/*---��ʼ��---*/
void queueInit(Queue* q);

/*---�ͷ�---*/
void queueDestory(Queue* q);

/*---���---*/
void queuePush(Queue* q, ElementType v);

/*---����---*/
void queuePop(Queue* q);

/*---����Ԫ��---*/
ElementType queueFront(const Queue* q);

/*---��βԪ��---*/
ElementType queueBack(const Queue* q);

/*---�Ƿ�Ϊ��---*/
int queueEmpty(const Queue* q);

/*---�ӳ�---*/
size_t queueSize(const Queue* q);