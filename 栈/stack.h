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

// 创建栈空间
void stackInit(Stack* s, int sz);

// 释放栈空间
void stackFree(Stack* s);

// 压栈
int push(Stack* s, ElementType x);

// 弹栈
ElementType pop(Stack* s);

// 取栈顶的表目
ElementType getTop(Stack* s);

// 栈置空
void makeEmpty(Stack* s);

// 判断栈是否为空
Bool isEmpty(Stack* s);

// 判断栈是否为满
Bool isFull(Stack* s);

// 后缀表达式求值
void evaluatePostfix();