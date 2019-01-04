/*
**	二分查找
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"
#include "time.h"

#define LEN 20

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

//快速排序
void quickSort(int arr[], int left, int right)
{
	//出口
	if (left > right)
	{
		return;
	}
	int i = left;
	int j = right;
	int value = arr[left];
	while (i < j)
	{
		while (i < j && arr[j] >= value)
		{
			--j;
		}
		arr[i] = arr[j];
		while (i < j && arr[i] <= value)
		{
			++i;
		}
		arr[j] = arr[i];
	}
	arr[i] = value;
	quickSort(arr, left, i - 1);
	quickSort(arr, i + 1, right);
}

//二分查找, 找到返回1, 找不到返回0
int binarySearch(int arr[], int left, int right, int target)
{
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (target > arr[mid])
		{
			left = mid + 1;
		}
		else if (target < arr[mid])
		{
			right = mid - 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int main()
{
	srand((unsigned int)time(0));
	int arr[LEN] = { 0 };
	int target = 0;
	int flag = 0;
	//数组元素的初始化
	for (int i = 0; i < LEN; ++i)
	{
		//随机值范围[11, 99]
		arr[i] = 11 + rand() % (99 - 11 + 1);
	}
	printf("初始数组打印如下: ");
	arrDisplay(arr, LEN);
	quickSort(arr, 0, LEN - 1);
	printf("快速排序后的数组打印如下: ");
	arrDisplay(arr, LEN);
	target = 11 + rand() % (99 - 11 + 1);
	printf("目标值为: %d\n", target);
	flag = binarySearch(arr, 0, LEN - 1, target);
	if (flag == 1)
	{
		printf("找到了!\n");
	}
	else
	{
		printf("没找到!\n");
	}
	system("pause");
	return 0;
}