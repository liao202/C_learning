/*
**	变长数组排序
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"
#include "assert.h"
#include "time.h"

int randomNumber()
{
	return 11 + rand() % (99 - 11 + 1);
}

void arrInit(int* arr, int len)
{
	for (int i = 0; i < len; ++i)
	{
		arr[i] = randomNumber();
	}
}

void arrDisplay(int* arr, int len)
{
	for (int i = 0; i < len; ++i)
	{
		if (i % 10 == 0)
		{
			printf("\n");
		}
		printf("%-5d", arr[i]);
	}
	printf("\n");
}

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void bubbleSort(int* arr, int len)
{
	for (int bound = 0; bound < len; ++bound)
	{
		for (int cur = len - 1; cur > bound; --cur)
		{
			if (arr[cur] < arr[cur - 1])
			{
				swap(&arr[cur], &arr[cur - 1]);
			}
		}
	}
}

int main()
{
	srand((unsigned int)time(0));

	int* arr = NULL;
	int number_elements = 0;

	printf("请输入数组的长度: \n");
	scanf("%d", &number_elements);
	assert(number_elements >= 0);
	arr = (int*)malloc(sizeof(int) * number_elements);
	assert(arr != NULL);

	arrInit(arr, number_elements);
	printf("初始数组打印如下: ");
	arrDisplay(arr, number_elements);
	bubbleSort(arr, number_elements);
	printf("排序后的数组打印如下: ");
	arrDisplay(arr, number_elements);

	free(arr);

	system("pause");
	return 0;
}