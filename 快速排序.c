/*
**	快速排序	
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

#define LEN 20

/*---数组打印函数---*/
void arrDisplay(int arr[])
{
	for (int i = 0; i < LEN; ++i)
	{
		if (i % 10 == 0)
		{
			printf("\n");
		}
		printf("%-5d", arr[i]);
	}
	printf("\n");
}

/*---快速排序---*/
void quickSort(int arr[], int left, int right)
{
	if (left < right)
	{
		int i = left;
		int j = right;
		int x = arr[left];
		while (i < j)
		{
			while (i < j && arr[j] >= x)
			{
				--j;
			}
			if (i < j)
			{
				arr[i++] = arr[j];
			}
			while (i < j && arr[i] <= x)
			{
				++i;
			}
			if (i < j)
			{
				arr[j--] = arr[i];
			}
		}
		arr[i] = x;
		quickSort(arr, left, i - 1);
		quickSort(arr, i + 1, right);
	}
}

int main()
{
	int arr[LEN] = { 0 };
	//数组元素的初始化
	for (int i = 0; i < LEN; ++i)
	{
		//随机数范围[1, 100]
		arr[i] = 1 + rand() % (100 - 1 + 1);
	}
	printf("排序前的数组打印如下: \n");
	arrDisplay(arr);
	quickSort(arr, 0, LEN - 1);
	printf("排序后的数组打印如下: \n");
	arrDisplay(arr);
	system("pause");
	return 0;
}