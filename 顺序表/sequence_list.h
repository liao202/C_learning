#pragma once

#include <stdio.h>

/*---Ԫ������---*/
typedef int ElementType;

/*---˳���---*/
struct SeqList 
{
	ElementType* seq_list;
	/*---Ԫ�صĸ���---*/
	size_t size;
	/*---�ռ�����---*/
	size_t capacity;
};

typedef struct SeqList SeqList;

/*---˳����ʼ��---*/
void seqListInit(SeqList* sl);

/*---˳����ɾ��---*/
void seqListDestory(SeqList* sl);

/*---�������---*/
void checkCapacity(SeqList* sl);

/*---��βѹջ---*/
void seqListPushBack(SeqList* sl, ElementType x);

/*---��β��ջ---*/
void seqListPopBack(SeqList* sl);

/*---��ͷѹջ---*/
void seqListPushFront(SeqList* sl, ElementType x);

/*---��ͷ��ջ---*/
void seqListPopFront(SeqList* sl);

/*---Ԫ�ز���---*/
int seqListFind(const SeqList* sl, ElementType x);

/*---Ԫ�ز���---*/
void seqListInsert(SeqList* sl, size_t pos, ElementType x);

/*---��Ԫ��λ���Ƴ�Ԫ��---*/
void seqListErase(SeqList* sl, size_t pos);

/*---��Ԫ��ֵ�Ƴ�Ԫ��---*/
void seqListRemove(SeqList* sl, ElementType x);

/*---Ԫ��ֵ�޸�---*/
void seqListModify(SeqList* sl, size_t pos, ElementType x);

/*---˳����ӡ---*/
void seqListDisplay(const SeqList* sl);

/*---ð������---*/
void seqListBubbleSort(SeqList* sl);

/*---���ֲ���---*/
void seqListBinarySearch(const SeqList* sl, ElementType x);

/*---�Ƴ�ȫ��ֵΪx��Ԫ��---*/
void seqListRemoveAll(SeqList* sl, ElementType x);