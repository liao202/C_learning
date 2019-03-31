#pragma once

#include <stdio.h>

/*---元素类型---*/
typedef int ElementType;

/*---顺序表---*/
struct SeqList 
{
	ElementType* seq_list;
	/*---元素的个数---*/
	size_t size;
	/*---空间容量---*/
	size_t capacity;
};

typedef struct SeqList SeqList;

/*---顺序表初始化---*/
void seqListInit(SeqList* sl);

/*---顺序表的删除---*/
void seqListDestory(SeqList* sl);

/*---容量检查---*/
void checkCapacity(SeqList* sl);

/*---表尾压栈---*/
void seqListPushBack(SeqList* sl, ElementType x);

/*---表尾出栈---*/
void seqListPopBack(SeqList* sl);

/*---表头压栈---*/
void seqListPushFront(SeqList* sl, ElementType x);

/*---表头出栈---*/
void seqListPopFront(SeqList* sl);

/*---元素查找---*/
int seqListFind(const SeqList* sl, ElementType x);

/*---元素插入---*/
void seqListInsert(SeqList* sl, size_t pos, ElementType x);

/*---按元素位置移除元素---*/
void seqListErase(SeqList* sl, size_t pos);

/*---按元素值移除元素---*/
void seqListRemove(SeqList* sl, ElementType x);

/*---元素值修改---*/
void seqListModify(SeqList* sl, size_t pos, ElementType x);

/*---顺序表打印---*/
void seqListDisplay(const SeqList* sl);

/*---冒泡排序---*/
void seqListBubbleSort(SeqList* sl);

/*---二分查找---*/
void seqListBinarySearch(const SeqList* sl, ElementType x);

/*---移除全部值为x的元素---*/
void seqListRemoveAll(SeqList* sl, ElementType x);