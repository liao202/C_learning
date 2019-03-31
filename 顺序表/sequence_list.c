#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "sequence_list.h"

void seqListInit(SeqList* sl)
{
	assert(sl != NULL);
	sl->size = 0;
	sl->capacity = 1;
	sl->seq_list = (ElementType*)malloc(sizeof(ElementType) * sl->capacity);
}

void seqListDestory(SeqList* sl)
{
	assert(sl != NULL);
	free(sl);
	sl = NULL;
}

void checkCapacity(SeqList* sl)
{
	assert(sl != NULL);
	if (sl->size >= sl->capacity)
	{
		sl->capacity *= 2;
		sl->seq_list = (ElementType*)realloc(sl->seq_list, sl->capacity * sizeof(ElementType));
	}
}

void seqListPushBack(SeqList* sl, ElementType x)
{
	assert(sl != NULL);
	checkCapacity(sl);
	++sl->size;
	sl->seq_list[sl->size - 1] = x;
}

void seqListPopBack(SeqList* sl)
{
	assert(sl != NULL);
	--sl->size;
}

void seqListPushFront(SeqList* sl, ElementType x)
{
	assert(sl != NULL);
	checkCapacity(sl);
	++sl->size;
	size_t i = 0;
	for (i = sl->size - 1; i > 0; --i)
	{
		sl->seq_list[i] = sl->seq_list[i - 1];
	}
	sl->seq_list[0] = x;
}

void seqListPopFront(SeqList* sl)
{
	assert(sl != NULL);
	size_t i = 0;
	for (i = 0; i < sl->size - 1; ++i)
	{
		sl->seq_list[i] = sl->seq_list[i + 1];
	}
	--sl->size;
}

int seqListFind(const SeqList* sl, ElementType x)
{
	assert(sl != NULL);
	size_t i = 0;
	for (i = 0; i < sl->size; ++i)
	{
		if (sl->seq_list[i] == x)
		{
			return 1;
		}
	}
	return 0;
}

void seqListInsert(SeqList* sl, size_t pos, ElementType x)
{
	assert(sl != NULL);
	checkCapacity(sl);
	++sl->size;
	size_t i = 0;
	for (i = sl->size - 1; i > pos; --i)
	{
		sl->seq_list[i] = sl->seq_list[i - 1];
	}
	sl->seq_list[pos] = x;
}

void seqListErase(SeqList* sl, size_t pos)
{
	assert(sl != NULL);
	size_t i = 0;
	for (i = pos; i < sl->size - 1; ++i)
	{
		sl->seq_list[i] = sl->seq_list[i + 1];
	}
	--sl->size;
}

void seqListRemove(SeqList* sl, ElementType x)
{
	assert(sl != NULL);
	size_t i = 0;
	for (i = 0; i < sl->size; )
	{
		if (sl->seq_list[i] == x)
		{
			size_t j = 0;
			for (j = i; j < sl->size - 1; ++j)
			{
				sl->seq_list[j] = sl->seq_list[j + 1];
			}
			--sl->size;
		}
		else
		{
			++i;
		}
	}
}

void seqListModify(SeqList* sl, size_t pos, ElementType x)
{
	assert(sl != NULL);
	sl->seq_list[pos] = x;
}

void seqListDisplay(const SeqList* sl)
{
	assert(sl != NULL);
	size_t i = 0;
	printf("The Sequence List is below: \n");
	for (i = 0; i < sl->size; ++i)
	{
		printf("%d  ", sl->seq_list[i]);
	}
	printf("\n");
}

void swap(ElementType* p1, ElementType* p2)
{
	assert(p1 != NULL);
	assert(p2 != NULL);
	ElementType temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

void seqListBubbleSort(SeqList* sl)
{
	assert(sl != NULL);
	size_t bound = 0;
	for (bound = 0; bound < sl->size; ++bound)
	{
		size_t cur = 0;
		for (cur = sl->size - 1; cur > bound; --cur)
		{
			if (sl->seq_list[cur] < sl->seq_list[cur - 1])
			{
				swap(&sl->seq_list[cur], &sl->seq_list[cur - 1]);
			}
		}
	}
}

void seqListBinarySearch(const SeqList* sl, ElementType x)
{
	assert(sl != NULL);
	size_t left = 0;
	size_t right = sl->size - 1;
	while (left <= right)
	{
		size_t mid = left + (right - left) / 2;
		if (x > sl->seq_list[mid])
		{
			left = mid + 1;
		}
		else if (x < sl->seq_list[mid])
		{
			right = mid - 1;
		}
		else
		{
			printf("Search Successful!\n");
			return;
		}
	}
	printf("Search Failed!\n");
}

void seqListRemoveAll(SeqList* sl, ElementType x)
{
	assert(sl != NULL);
	size_t i = 0;
	size_t j = 0;
	for (i = 0, j = 0; i < sl->size; ++i)
	{
		if (x != sl->seq_list[i])
		{
			sl->seq_list[j] = sl->seq_list[i];
			++j;
		}
	}
	sl->size = j;
}