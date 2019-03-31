#pragma once

typedef int ElementType;

/*---结点---*/
typedef struct Node 
{
	ElementType value;
	struct Node* next;
	struct Node* prev;
} Node;

/*---初始化---*/
void dcllInit(Node** head);

/*---释放---*/
void dcllDestory(Node** head);

/*---头插---*/
void dcllPushFront(Node** head, ElementType v);

/*---头删---*/
void dcllPopFront(Node** head);

/*---尾插---*/
void dcllPushBack(Node** head, ElementType v);

/*---尾删---*/
void dcllPopBack(Node** head);

/*---查找---*/
const Node* dcllFind(const Node** head, ElementType v);

/*---pos前插入---*/
void dcllInsertBefore(Node* pos, ElementType v);

/*---pos删除---*/
void dcllErase(Node* pos);

/*---删除---*/
void dcllRemove(Node** head, ElementType v);

/*---移除全部---*/
void dcllRemoveAll(Node** head, ElementType v);

/*---打印---*/
void dcllDisplay(const Node** head);