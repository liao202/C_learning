/*
**	ѡ������
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"
#include "time.h"

#define LEN 50

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

//ѡ������
void selectSort(int arr[], int len)
{
	int min = 0;
	int i = 0;
	int j = 0;
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
	int arr[LEN] = { 0 };
	for (int i = 0; i < LEN; ++i)
	{
		arr[i] = 11 + rand() % (99 - 11 + 1);
	}
	printf("��ʼ�����ӡ����: ");
	arrDisplay(arr, LEN);
	selectSort(arr, LEN);
	printf("ѡ�������������ӡ����: ");
	arrDisplay(arr, LEN);
	system("pause");
	return 0;
}