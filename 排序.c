/*
**	���������㷨
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"
#include "time.h"

#define LEN 30

//�����ӡ
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

//����
void swap(int* p1, int* p2)
{
	int temp = 0;
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

//ð������
void bubbleSort(int arr[], int len)
{
	for (int bound = 0; bound < len; ++bound)
	{
		for (int cur = len - 1; cur > bound; --cur)
		{
			if (arr[cur] < arr[cur - 1])
			{
				swap(&arr[cur], &arr[cur - 1]);
			}
		}
	}
}

//��������
void quickSort(int arr[], int left, int right)
{
	//����
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

//��������
void insertSort(int arr[], int len)
{
	int i = 0;
	int j = 0;
	int temp = 0;
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

//ѡ������
void selectSort(int arr[], int len)
{
	int i = 0;
	int j = 0;
	int min = 0;
	for (i = 0; i < len; ++i)
	{
		min = i;
		for (j = i + 1; j < len; ++j)
		{
			if (arr[min] > arr[j])
			{
				min = j;
			}
		}
		if (min != i)
		{
			swap(&arr[min], &arr[i]);
		}
	}
}

int main()
{
	srand((unsigned int)time(0));
	int arr1[LEN] = { 0 };
	int arr2[LEN] = { 0 };
	int arr3[LEN] = { 0 };
	int arr4[LEN] = { 0 };
	for (int i = 0; i < LEN; ++i)
	{
		arr1[i] = 11 + rand() % (99 - 11 + 1);
	}
	for (int i = 0; i < LEN; ++i)
	{
		arr2[i] = 11 + rand() % (99 - 11 + 1);
	}
	for (int i = 0; i < LEN; ++i)
	{
		arr3[i] = 11 + rand() % (99 - 11 + 1);
	}
	for (int i = 0; i < LEN; ++i)
	{
		arr4[i] = 11 + rand() % (99 - 11 + 1);
	}
	printf("��ʼ����1��ӡ����: ");
	arrDisplay(arr1, LEN);
	bubbleSort(arr1, LEN);
	printf("����1ð�������Ľ����ӡ����: ");
	arrDisplay(arr1, LEN);
	printf("��ʼ����2��ӡ����: ");
	arrDisplay(arr2, LEN);
	quickSort(arr2, 0, LEN - 1);
	printf("����2���������Ľ����ӡ����: ");
	arrDisplay(arr2, LEN);
	printf("��ʼ����3��ӡ����: ");
	arrDisplay(arr3, LEN);
	insertSort(arr3, LEN);
	printf("����3���������Ľ����ӡ����: ");
	arrDisplay(arr3, LEN);
	printf("��ʼ����4��ӡ����: ");
	arrDisplay(arr4, LEN);
	selectSort(arr4, LEN);
	printf("����4ѡ�������Ľ����ӡ����: ");
	arrDisplay(arr4, LEN);
	system("pause");
	return 0;
}