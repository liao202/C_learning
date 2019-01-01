/*
**	判断数组中是否有重复元素	
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"
#include "time.h"

#define LEN 10

/*---数组打印函数---*/
void arrDisplay(int arr[])
{
	for (int i = 0; i < LEN; ++i)
	{
		printf("%-5d", arr[i]);
		if ((i + 1) % 5 == 0)
		{
			printf("\n");
		}
	}
	printf("\n");
}

/*---交换函数---*/
void swap(int* p1, int* p2)
{
	int temp = 0;
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

/*---冒牌排序---*/
void bubbleSort(int arr[])
{
	for (int bound = 0; bound < LEN; ++bound)
	{
		for (int cur = LEN - 1; cur > bound; --cur)
		{
			if (arr[cur] < arr[cur - 1])
			{
				swap(&arr[cur], &arr[cur - 1]);
			}
		}
	}
}

/*---判断数组中是否有重复元素---*/
int containsDuplicates(int arr[])
{
	for (int i = 0; i < LEN - 1; ++i)
	{
		if ((arr[i] ^ arr[i + 1]) == 0)
		{
			//数组中有相同元素
			return 1;
		}
	}
	return 0;
}

int main()
{
	srand((unsigned int)time(0));
	int arr[LEN] = { 0 };
	int flag = 0;
	//数组元素的初始化
	for (int i = 0; i < LEN; ++i)
	{
		//随机值范围[2, 50]
		arr[i] = 2 + rand() % (50 - 2 + 1);
	}
	printf("初始数组打印如下: \n");
	arrDisplay(arr);
	bubbleSort(arr);
	printf("排序后数组打印如下: \n");
	arrDisplay(arr);
	flag = containsDuplicates(arr);
	if (flag == 1)
	{
		printf("数组中存在相同元素!\n");
	}
	else
	{
		printf("数组中不存在相同元素!\n");
	}
	system("pause");
	return 0;
}