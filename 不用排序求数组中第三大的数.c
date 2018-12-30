/*
**	不用排序求数组中第三大的数
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

#define LEN 8

//数组打印
void arrDisplay(int arr[], int len)
{
	for (int i = 0; i < len; ++i)
	{
		if (i % 10 == 0)
		{
			printf("\n");
		}
		printf("%-2d", arr[i]);
	}
	printf("\n");
}

//数组中第三大的数求解
int thirdNumber(int arr[], int len)
{
	int first = INT_MIN;	
	int second = INT_MIN;
	int third = INT_MIN;
	for (int i = 0; i < len; ++i)
	{
		if (arr[i] > first)
		{
			first = arr[i];
		}
	}
	for (int i = 0; i < len; ++i)
	{
		if (arr[i] > second && arr[i] != first)
		{
			second = arr[i];
		}
	}
	for (int i = 0; i < len; ++i)
	{
		if (arr[i] > third && arr[i] != first && arr[i] != second)
		{
			third = arr[i];
		}
	}
	if (third != INT_MIN)
	{
		return third;
	}
	else
	{
		return first;
	}
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

int main()
{
	int arr[LEN] = { 9, 1, 4, 0, 6, 3, 8, 7 };
	int third_number = 0;
	third_number = thirdNumber(arr, LEN);
	printf("数组打印如下: ");
	arrDisplay(arr, LEN);
	quickSort(arr, 0, LEN - 1);
	printf("排序后的数组打印如下: ");
	arrDisplay(arr, LEN);
	printf("数组中第三大的数是: %d\n", third_number);
	system("pause");
	return 0;
}