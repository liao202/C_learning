/*
**	求数组中三个数乘积的最大值
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"
#include "time.h"

#define LEN 100

/*---数组打印函数---*/
void arrDisplay(int arr[])
{
	for (int i = 0; i < LEN; ++i)
	{
		printf("%-5d", arr[i]);
		if ((i + 1) % 10 == 0)
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

/*---冒泡排序---*/
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

int main()
{
	int arr[LEN] = { 0 };
	int result = 0;
	//数组元素的初始化
	for (int i = 0; i < LEN; ++i)
	{
		//设置随机值范围[-100, 100]
		arr[i] = -100 + rand() % (100 - (-100) + 1);
	}
	printf("初始数组打印如下: \n");
	arrDisplay(arr);
	bubbleSort(arr);
	printf("排序后的数组打印如下: \n");
	arrDisplay(arr);
	result = max(arr[0] * arr[1] * arr[LEN - 1],
		arr[LEN - 1] * arr[LEN - 2] * arr[LEN - 3]);
	printf("三个数乘积的最大值为: %d\n", result);
	system("pause");
	return 0;
}