/*
**	�ж��������Ƿ����ظ�Ԫ��	
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"
#include "time.h"

#define LEN 10

/*---�����ӡ����---*/
void arrDisplay(int arr[])
{
	for (int i = 0; i < LEN; ++i)
	{
		printf("%-5d", arr[i]);
		if ((i + 1) % 5 == 0)
		{
			printf("\n");
		}
	}
	printf("\n");
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

/*---�ж��������Ƿ����ظ�Ԫ��---*/
int containsDuplicates(int arr[])
{
	for (int i = 0; i < LEN - 1; ++i)
	{
		if ((arr[i] ^ arr[i + 1]) == 0)
		{
			//����������ͬԪ��
			return 1;
		}
	}
	return 0;
}

int main()
{
	srand((unsigned int)time(0));
	int arr[LEN] = { 0 };
	int flag = 0;
	//����Ԫ�صĳ�ʼ��
	for (int i = 0; i < LEN; ++i)
	{
		//���ֵ��Χ[2, 50]
		arr[i] = 2 + rand() % (50 - 2 + 1);
	}
	printf("��ʼ�����ӡ����: \n");
	arrDisplay(arr);
	bubbleSort(arr);
	printf("����������ӡ����: \n");
	arrDisplay(arr);
	flag = containsDuplicates(arr);
	if (flag == 1)
	{
		printf("�����д�����ͬԪ��!\n");
	}
	else
	{
		printf("�����в�������ͬԪ��!\n");
	}
	system("pause");
	return 0;
}