#pragma once

typedef int ElementType;

/*---队列结点---*/
typedef struct Node 
{
	ElementType value;
	struct Node* next;
} Node;

/*---队列---*/
typedef struct Queue 
{
	Node* front;
} Queue;

/*---初始化---*/
void queueInit(Queue* q);

/*---释放---*/
void queueDestory(Queue* q);

/*---入队---*/
void queuePush(Queue* q, ElementType v);

/*---出队---*/
void queuePop(Queue* q);

/*---队首元素---*/
ElementType queueFront(const Queue* q);

/*---队尾元素---*/
ElementType queueBack(const Queue* q);

/*---是否为空---*/
int queueEmpty(const Queue* q);

/*---队长---*/
size_t queueSize(const Queue* q);