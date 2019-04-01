#pragma once

typedef int ElementType;

/*---栈---*/
typedef struct Stack 
{
	ElementType* ele;
	size_t top;
	size_t capacity;
} Stack;

/*---初始化---*/
void stackInit(Stack* st);

/*---释放---*/
void stackDestory(Stack* st);

/*---压栈---*/
void stackPush(Stack* st, ElementType v);

/*---弹栈---*/
void stackPop(Stack* st);

/*---取出栈顶元素---*/
ElementType stackTop(const Stack* st);

/*---是否为空---*/
int stackEmpty(const Stack* st);

/*---栈元素数量---*/
size_t stackSize(const Stack* st);