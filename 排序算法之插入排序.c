/*
**	插入排序
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

#define LEN 50

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

//插入排序
void insertSort(int arr[], int len)
{
	int temp = 0; 
	int i = 0;
	int j = 0;
	for (i = 1; i < len; ++i)
	{
		if (arr[i] < arr[i - 1])
		{
			temp = arr[i];
			for (j = i - 1; j >= 0 && arr[j] > temp; --j)
			{
				arr[j + 1] = arr[j];
			}
			arr[j + 1] = temp;
		}
	}
}

int main()
{
	int arr[LEN] = { 0 };
	//数组初始化
	for (int i = 0; i < LEN; ++i)
	{
		//随机值范围[11, 99]
		arr[i] = 11 + rand() % (99 - 11 + 1);
	}
	printf("初始化数组打印如下: ");
	arrDisplay(arr, LEN);
	insertSort(arr, LEN);
	printf("插入排序后的数组打印如下: ");
	arrDisplay(arr, LEN);
	system("pause");
	return 0;
}