/*
**	使用回调函数, 模拟实现qsort(采用冒泡的方式)
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

int int_cmp(const void* p1, const void* p2)
{
	return (*(int*)p1 > *(int*)p2);
}

void _swap(void* p1, void* p2, int size)
{
	for (int i = 0; i < size; ++i)
	{
		char temp = *((char*)p1 + i);
		*((char*)p1 + i) = *((char*)p2 + i);
		*((char*)p2 + i) = temp;
	}
}

void bubble(void* base, int count, int size, int(*cmp)(void*, void*))
{
	for (int i = 0; i < count - 1; ++i)
	{
		for (int j = 0; j < count - i - 1; ++j)
		{
			if (cmp((char*)base + j * size, (char*)base + (j + 1) * size) > 0)
			{
				_swap((char*)base + j * size, (char*)base + (j + 1) * size, size);
			}
		}
	}
}

int main()
{
	int arr[] = {
		1, 3, 5, 7, 9, 2, 4, 6, 8, 0
	};
	bubble(arr, sizeof(arr) / sizeof(arr[0]),
		sizeof(int), int_cmp);
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i)
	{
		printf("%-2d", arr[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}