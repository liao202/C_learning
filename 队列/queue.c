/*
**	╤сап
*/

#define _CRT_SECURE_NO_WARNINGS

#include "queue.h"

void queueInit(Queue* q, int sz)
{
	q->max_size = sz;
	q->elements = (ElementType*)malloc(sizeof(ElementType)
		* q->max_size);
	q->front = q->rear = 0;
}

void queueFree(Queue* q)
{
	free(q->elements);
}

void makeEmpty(Queue* q)
{
	q->front = q->rear;
}

void isEmpty(Queue* q)
{
	return (Bool)(q->front == q->rear);
}

void isFull(Queue* q)
{
	return (Bool)(q->front == 
		(q->rear + 1) % (q->max_size));
}

int length(Queue* q)
{
	return (q->rear - q->front + q->max_size)
		% (q->max_size);
}