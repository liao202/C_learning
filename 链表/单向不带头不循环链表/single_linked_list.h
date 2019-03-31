#pragma once

typedef int ElementType;

/*---���---*/
typedef struct Node 
{
	ElementType value;
	struct Node* next;
} Node;

/*---��ʼ��---*/
void sLLInit(Node** first);

/*---�ͷ�---*/
void sLLDestory(Node** first);

/*---ͷ��---*/
void sLLPushFront(Node** first, ElementType v);

/*---ͷɾ---*/
void sLLPopFront(Node** first);

/*---β��---*/
void sLLPushBack(Node** first, ElementType v);

/*---βɾ---*/
void sLLPopBack(Node** first);

/*---����---*/
const Node* sLLFind(const Node** first, ElementType v);

/*---pos���---*/
void sLLInsertAfter(Node* pos, ElementType v);

/*---pos��ɾ---*/
void sLLEraseAfter(Node* pos);

/*---�Ƴ�---*/
void sLLRemove(Node** first, ElementType v);

/*---�Ƴ�ȫ��---*/
void sLLRemoveAll(Node** first, ElementType v);

/*---��ӡ---*/
void sLLDisplay(const Node** first);