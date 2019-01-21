#pragma once

typedef int ElementType;

enum boolean
{
	FALSE,
	TRUE
};

typedef enum boolean Bool;

struct Queue 
{
	// 队头, 队尾指针
	int rear, front;
	// 存放队列元素的数组
	ElementType* elements;
	// 队列空间的最大尺寸
	int max_size;
};

typedef struct Queue Queue;

// 队列的初始化
void queueInit(Queue* q, int sz);

// 队列空间释放
void queueFree(Queue* q);

// 队列置空
void makeEmpty(Queue* q);

// 判断队列是否为空
Bool isEmpty(Queue* q);

// 判断队列是否已满
Bool isFull(Queue* q);

// 求队列的元素个数
int length(Queue* q);