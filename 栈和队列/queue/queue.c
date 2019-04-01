#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "queue.h"

void queueInit(Queue* q)
{
	assert(q != NULL);
	q->front = NULL;
}

void queueDestory(Queue* q)
{
	assert(q != NULL);
	while (q->front != NULL)
	{
		Node* temp = q->front;
		q->front = q->front->next;
		free(temp);
		temp = NULL;
	}
}

static Node* createNode(ElementType v)
{
	Node* node = createNode(v);
	assert(node != NULL);
	node->value = v;
	return node;
}

void queuePush(Queue* q, ElementType v)
{
	assert(q != NULL); 
	Node* node = createNode(v);
	if (q->front == NULL)
	{
		node->next = NULL;
		q->front = node;
		return;
	}
	Node* cur = q->front;
	while (cur->next == NULL)
	{
		cur = cur->next;
	}
	node->next = NULL;
	cur->next = node;
}

void queuePop(Queue* q)
{
	assert(q != NULL);
	if (q->front == NULL)
	{
		return;
	}
	Node* temp = q->front;
	q->front = q->front->next;
	free(temp);
	temp = NULL;
}

ElementType queueFront(const Queue* q)
{
	assert(q != NULL);
	assert(q->front != NULL);
	return q->front->value;
}

ElementType queueBack(const Queue* q)
{
	assert(q != NULL);
	assert(q->front != NULL);
	Node* cur = q->front;
	while (cur->next != NULL)
	{
		cur = cur->next;
	}
	return cur->value;
}

int queueEmpty(const Queue* q)
{
	assert(q != NULL);
	if (q->front == NULL)
	{
		return 1;
	}
	return 0;
}

size_t queueSize(const Queue* q)
{
	assert(q != NULL);
	if (q->front == NULL)
	{
		return 0;
	}
	size_t size = 0;
	Node* cur = q->front;
	while (cur != NULL)
	{
		cur = cur->next;
		++size;
	}
	return size;
}