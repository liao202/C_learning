#pragma once

#include "stdio.h"
#include "stdlib.h"

enum boolean
{
	FALSE,
	TRUE
};

typedef enum boolean Bool;

typedef int ElementType;

struct Stack 
{
	int top;
	ElementType* elements;
	int max_size;
};

typedef struct Stack Stack;

// ����ջ�ռ�
void stackInit(Stack* s, int sz);

// �ͷ�ջ�ռ�
void stackFree(Stack* s);

// ѹջ
int push(Stack* s, ElementType x);

// ��ջ
ElementType pop(Stack* s);

// ȡջ���ı�Ŀ
ElementType getTop(Stack* s);

// ջ�ÿ�
void makeEmpty(Stack* s);

// �ж�ջ�Ƿ�Ϊ��
Bool isEmpty(Stack* s);

// �ж�ջ�Ƿ�Ϊ��
Bool isFull(Stack* s);

// ��׺���ʽ��ֵ
void evaluatePostfix();