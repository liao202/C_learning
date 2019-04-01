#pragma once

typedef int ElementType;

/*---ջ---*/
typedef struct Stack 
{
	ElementType* ele;
	size_t top;
	size_t capacity;
} Stack;

/*---��ʼ��---*/
void stackInit(Stack* st);

/*---�ͷ�---*/
void stackDestory(Stack* st);

/*---ѹջ---*/
void stackPush(Stack* st, ElementType v);

/*---��ջ---*/
void stackPop(Stack* st);

/*---ȡ��ջ��Ԫ��---*/
ElementType stackTop(const Stack* st);

/*---�Ƿ�Ϊ��---*/
int stackEmpty(const Stack* st);

/*---ջԪ������---*/
size_t stackSize(const Stack* st);