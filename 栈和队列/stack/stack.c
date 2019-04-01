#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "stack.h"

void stackInit(Stack* st)
{
	assert(st != NULL);
	st->capacity = 1;
	st->top = 0;
	st->ele = (ElementType*)malloc(sizeof(ElementType) * st->capacity);
	assert(st->ele != NULL);
}

void stackDestory(Stack* st)
{
	assert(st != NULL);
	free(st->ele);
	st->ele = NULL;
	st->top = 0;
	st->capacity = 0;
}

static void checkCapacity(Stack* st)
{
	if (st->top >= st->capacity)
	{
		st->capacity *= 2;
		st->ele = (ElementType*)realloc(st->ele,
			sizeof(ElementType) * st->capacity);
	}
}

void stackPush(Stack* st, ElementType v)
{
	assert(st != NULL);
	checkCapacity(st);
	++st->top;
	st->ele[st->top - 1] = v;
}

void stackPop(Stack* st)
{
	assert(st != NULL);
	--st->top;
}

ElementType stackTop(const Stack* st)
{
	assert(st != NULL);
	return st->ele[st->top - 1];
}

int stackEmpty(const Stack* st)
{
	assert(st != NULL);
	if (st->top == 0)
	{
		return 1;
	}
	return 0;
}

size_t stackSize(const Stack* st)
{
	return (size_t)st->top;
}