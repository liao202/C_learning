/*
**	求数组中第三大的数
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

#define LEN 4

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

//去重, 并返回第三大的值
int removeDuplicates(int arr[], int len)
{
	//去重
	int count = 0;
	for (int i = 0; i < len; ++i)
	{
		if (arr[count] != arr[i])
		{
			++count;
			arr[count] = arr[i];
		}
	}
	//第三大
	if (count < 2)
	{
		return arr[count];
	}
	else
	{
		return arr[count - 2];
	}
}

int main()
{
	int arr[LEN] = { 2, 2, 3, 1 };
	int result = 0;
	quickSort(arr, 0, LEN - 1);
	result = removeDuplicates(arr, LEN);
	printf("数组中第三大的数是: %d\n", result);
	system("pause");
	return 0;
}