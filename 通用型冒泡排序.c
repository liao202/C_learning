/*
**	ͨ����ð������
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"
#include "time.h"

#define LEN 20

//�����
int randomNumber()
{
	return 11 + rand() % (99 - 11 + 1);
}

//�����ʼ��
void arrInit(int arr[], int len)
{
	for (int i = 0; i < len; ++i)
	{
		arr[i] = randomNumber();
	}
}

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
void swap(int* num1, int* num2)
{
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}

//�������
int asc(int num1, int num2)
{
	if (num1 < num2)
	{
		return 1;
	}
	return 0;
}

//�������
int desc(int num1, int num2)
{
	if (num1 > num2)
	{
		return 1;
	}
	return 0;
}

typedef int (*SortRule)(int, int);

//ͨ����ð������
void bubbleSort(int arr[], int len, SortRule sort_rule)
{
	for (int bound = 0; bound < len; ++bound)
	{
		for (int cur = len - 1; cur > bound; --cur)
		{
			if (sort_rule(arr[cur], arr[cur - 1]) == 1)
			{
				swap(&arr[cur], &arr[cur - 1]);
			}
		}
	}
}

int main()
{
	srand((unsigned int)time(0));
	int arr[LEN] = { 0 };
	arrInit(arr, LEN);
	printf("��ʼ�����ӡ����: ");
	arrDisplay(arr, LEN);
	bubbleSort(arr, LEN, asc);
	printf("�����������ӡ����: ");
	arrDisplay(arr, LEN);
	bubbleSort(arr, LEN, desc);
	printf("�����������ӡ����: ");
	arrDisplay(arr, LEN);
	system("pause");
	return 0;
}