/*
**	���������������˻������ֵ
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"
#include "time.h"

#define LEN 100

/*---�����ӡ����---*/
void arrDisplay(int arr[])
{
	for (int i = 0; i < LEN; ++i)
	{
		printf("%-5d", arr[i]);
		if ((i + 1) % 10 == 0)
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

int main()
{
	int arr[LEN] = { 0 };
	int result = 0;
	//����Ԫ�صĳ�ʼ��
	for (int i = 0; i < LEN; ++i)
	{
		//�������ֵ��Χ[-100, 100]
		arr[i] = -100 + rand() % (100 - (-100) + 1);
	}
	printf("��ʼ�����ӡ����: \n");
	arrDisplay(arr);
	bubbleSort(arr);
	printf("�����������ӡ����: \n");
	arrDisplay(arr);
	result = max(arr[0] * arr[1] * arr[LEN - 1],
		arr[LEN - 1] * arr[LEN - 2] * arr[LEN - 3]);
	printf("�������˻������ֵΪ: %d\n", result);
	system("pause");
	return 0;
}