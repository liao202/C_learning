/*
**	归并排序
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

void merge(int src[], int temp[], int start, int mid, int end)
{
	int i = start;
	int j = mid + 1;
	int k = start;
	while (i != mid + 1 && j != end + 1)
	{
		if (src[i] > src[j])
		{
			temp[k] = src[j];
			++j;
			++k;
		}
		else
		{
			temp[k] = src[i];
			++i;
			++k;
		}
	}
	while (i != mid + 1)
	{
		temp[k] = src[i];
		++i;
		++k;
	}
	while (j != end + 1)
	{
		temp[k] = src[j];
		++j;
		++k;
	}
	for (i = start; i <= end; ++i)
	{
		src[i] = temp[i];
	}
}

//归并排序
void mergeSort(int src[], int temp[], int start, int end)
{
	int mid = 0;
	if (start < end)
	{
		mid = start + (end - start) / 2;
		mergeSort(src, temp, start, mid);
		mergeSort(src, temp, mid + 1, end);
		merge(src, temp, start, mid, end);
	}
}

int main()
{
	srand((unsigned int)time(0));
	int arr[LEN] = { 0 };
	int temp[LEN] = { 0 };
	//数组元素的初始化
	for (int i = 0; i < LEN; ++i)
	{
		//随机值范围[11, 99]
		arr[i] = 11 + rand() % (99 - 11 + 1);
	}
	printf("初始数组打印如下: ");
	arrDisplay(arr, LEN);
	mergeSort(arr, temp, 0, LEN - 1);
	printf("排序后的数组打印如下: ");
	arrDisplay(arr, LEN);
	system("pause");
	return 0;
}