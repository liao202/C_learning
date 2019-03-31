#pragma once

typedef int ElementType;

/*---结点---*/
typedef struct Node 
{
	ElementType value;
	struct Node* next;
} Node;

/*---初始化---*/
void sLLInit(Node** first);

/*---释放---*/
void sLLDestory(Node** first);

/*---头插---*/
void sLLPushFront(Node** first, ElementType v);

/*---头删---*/
void sLLPopFront(Node** first);

/*---尾插---*/
void sLLPushBack(Node** first, ElementType v);

/*---尾删---*/
void sLLPopBack(Node** first);

/*---查找---*/
const Node* sLLFind(const Node** first, ElementType v);

/*---pos后插---*/
void sLLInsertAfter(Node* pos, ElementType v);

/*---pos后删---*/
void sLLEraseAfter(Node* pos);

/*---移除---*/
void sLLRemove(Node** first, ElementType v);

/*---移除全部---*/
void sLLRemoveAll(Node** first, ElementType v);

/*---打印---*/
void sLLDisplay(const Node** first);