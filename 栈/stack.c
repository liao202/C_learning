/*
**	Õ»ÔËËã
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stack.h"

void stackInit(Stack* s, int sz)
{
	s->max_size = sz;
	s->elements = (ElementType*)malloc(sizeof(ElementType)
		* s->max_size);
	s->top = -1;
}

void stackFree(Stack* s)
{
	free(s->elements);
}

void makeEmpty(Stack* s)
{
	s->top = -1;
}

Bool isEmpty(Stack* s)
{
	return (Bool)(s->top == -1);
}

Bool isFull(Stack* s)
{
	return (Bool)(s->top == s->max_size - 1);
}

int push(Stack* s, ElementType x)
{
	if (isFull(s) == 0)
	{
		++s->top;
		s->elements[s->top] = x;
		return 0;
	}
	return -1;
}

ElementType pop(Stack* s)
{
	if (isEmpty(s) == 1)
	{
		printf("Stack is empty!\n");
		exit(1);
	}
	else
	{
		return s->elements[s->top--];
	}
}

ElementType getTop(Stack* s)
{
	if (isEmpty(s) != 1)
	{
		return s->elements[s->top];
	}
	else
	{
		printf("Stack is empty!\n");
		exit(1);
	}
}