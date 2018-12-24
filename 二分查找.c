/*
**	���ֲ���
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"
#include "time.h"

#define LEN 20

/*---�����ӡ����---*/
void arrDisplay(int arr[])
{
	for (int i = 0; i < LEN; ++i)
	{
		printf("%-3d", arr[i]);
		if ((i + 1) % 10 == 0)
		{
			printf("\n");
		}
	}
}

/*---Ŀ��ֵ���Һ���---*/
int search(int arr[], int target)
{
	int left = 0;
	int right = LEN;
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
			return mid;
		}
	}
	return -1;
}

/*---��������---*/
void swap(int* p1, int* p2)
{
	int temp = 0;
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

/*---ð������---*/
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
	srand((unsigned int)time(0));
	int target = 0;
	int index = 0;
	int arr[LEN] = { 0 };
	printf("������Ҫ���ҵ�Ŀ��ֵ: \n");
	scanf("%d", &target);
	for (int i = 0; i < LEN; ++i)
	{
		arr[i] = 8 + rand() % (21 - 8 + 1);
	}
	printf("�����ӡ����: \n");
	arrDisplay(arr);
	bubbleSort(arr);
	printf("�����������ӡ����: \n");
	arrDisplay(arr);
	index = search(arr, target);
	printf("Ŀ��ֵ���±�Ϊ: %d\n", index);
	system("pause");
	return 0;
}