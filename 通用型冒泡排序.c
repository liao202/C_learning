/*
**	通用型冒泡排序
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"
#include "time.h"

#define LEN 20

//随机数
int randomNumber()
{
	return 11 + rand() % (99 - 11 + 1);
}

//数组初始化
void arrInit(int arr[], int len)
{
	for (int i = 0; i < len; ++i)
	{
		arr[i] = randomNumber();
	}
}

//数组打印
void arrDisplay(int arr[], int len)
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

//交换
void swap(int* num1, int* num2)
{
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}

//升序规则
int asc(int num1, int num2)
{
	if (num1 < num2)
	{
		return 1;
	}
	return 0;
}

//降序规则
int desc(int num1, int num2)
{
	if (num1 > num2)
	{
		return 1;
	}
	return 0;
}

typedef int (*SortRule)(int, int);

//通用型冒泡排序
void bubbleSort(int arr[], int len, SortRule sort_rule)
{
	for (int bound = 0; bound < len; ++bound)
	{
		for (int cur = len - 1; cur > bound; --cur)
		{
			if (sort_rule(arr[cur], arr[cur - 1]) == 1)
			{
				swap(&arr[cur], &arr[cur - 1]);
			}
		}
	}
}

int main()
{
	srand((unsigned int)time(0));
	int arr[LEN] = { 0 };
	arrInit(arr, LEN);
	printf("初始数组打印如下: ");
	arrDisplay(arr, LEN);
	bubbleSort(arr, LEN, asc);
	printf("升序后的数组打印如下: ");
	arrDisplay(arr, LEN);
	bubbleSort(arr, LEN, desc);
	printf("降序后的数组打印如下: ");
	arrDisplay(arr, LEN);
	system("pause");
	return 0;
}