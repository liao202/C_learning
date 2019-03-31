#pragma once

typedef int ElementType;

/*---���---*/
typedef struct Node 
{
	ElementType value;
	struct Node* next;
	struct Node* prev;
} Node;

/*---��ʼ��---*/
void dcllInit(Node** head);

/*---�ͷ�---*/
void dcllDestory(Node** head);

/*---ͷ��---*/
void dcllPushFront(Node** head, ElementType v);

/*---ͷɾ---*/
void dcllPopFront(Node** head);

/*---β��---*/
void dcllPushBack(Node** head, ElementType v);

/*---βɾ---*/
void dcllPopBack(Node** head);

/*---����---*/
const Node* dcllFind(const Node** head, ElementType v);

/*---posǰ����---*/
void dcllInsertBefore(Node* pos, ElementType v);

/*---posɾ��---*/
void dcllErase(Node* pos);

/*---ɾ��---*/
void dcllRemove(Node** head, ElementType v);

/*---�Ƴ�ȫ��---*/
void dcllRemoveAll(Node** head, ElementType v);

/*---��ӡ---*/
void dcllDisplay(const Node** head);