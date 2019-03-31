#define _CRT_SECURE_NO_WARNINGS

#include "sequence_list.h"

int main()
{
	SeqList s1;
	seqListInit(&s1);
	seqListDisplay(&s1);
	seqListPushBack(&s1, 3);
	seqListPushBack(&s1, 3);
	seqListPushBack(&s1, 3);
	seqListPushBack(&s1, 3);
	seqListPushBack(&s1, 3);
	seqListPushBack(&s1, 3);
	seqListPushBack(&s1, 3);
	seqListPushBack(&s1, 3);
	seqListPushBack(&s1, 3);
	seqListDisplay(&s1);
	seqListPushFront(&s1, 4);	
	seqListPushFront(&s1, 4);
	seqListPushFront(&s1, 4);
	seqListPushFront(&s1, 4);
	seqListPushFront(&s1, 4);
	seqListPushFront(&s1, 4);
	seqListDisplay(&s1);
	seqListInsert(&s1, 2, 6);
	seqListDisplay(&s1);
	seqListPopBack(&s1);
	seqListDisplay(&s1);
	seqListPopFront(&s1);
	seqListDisplay(&s1);
	seqListErase(&s1, 5);
	seqListDisplay(&s1);
	seqListRemove(&s1, 3);
	seqListDisplay(&s1);
	seqListRemove(&s1, 4);
	seqListDisplay(&s1);
	seqListModify(&s1, 0, 5);
	seqListDisplay(&s1);
	seqListPushFront(&s1, 4);
	seqListPushFront(&s1, 9);
	seqListPushFront(&s1, 4);
	seqListPushFront(&s1, 1);
	seqListPushFront(&s1, 0);
	seqListPushFront(&s1, 7);
	seqListPushFront(&s1, 8);
	seqListDisplay(&s1);
	seqListBubbleSort(&s1);
	seqListDisplay(&s1);
	seqListPopBack(&s1);
	seqListDisplay(&s1);
	seqListPopFront(&s1);
	seqListDisplay(&s1);
	seqListRemove(&s1, 4);
	seqListDisplay(&s1);
	seqListDestory(&s1);
	system("pause");
	return 0;
}