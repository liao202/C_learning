/*
**	��һ��������е���, ʹ������ǰ, ż���ں�
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"
#include "time.h"

#define LEN 100

/*---��ֵ����---*/
void swap(int* p1, int* p2)
{
	int temp = 0;
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

/*---�������---*/
void arrAdjust(int arr[])
{
	int* left = arr;
	int* right = arr + LEN - 1;
	while (left < right)
	{
		while (*left % 2 != 0)
		{
			++left;
		}
		while (*right % 2 != 1)
		{
			--right;
		}
		if (left < right)
		{
			swap(left, right);
		}
	}
}

int main()
{
	//�������
	srand((unsigned int)time(0));
	int arr[LEN] = { 0 };
	//�����ʼ��
	for (int i = 0; i < LEN; ++i)
	{
		//������Ԫ�ظ����ֵ, 0~99
		arr[i] = 0 + rand() % (99 - 0 + 1);
	}
	//����Ԫ�ش�ӡ
	printf("����Ԫ������: \n");
	for (int i = 0; i < LEN; ++i)
	{
		printf("%-4d", arr[i]);
		if ((i + 1) % 10 == 0)
		{
			printf("\n");
		}
	}
	printf("\n");
	arrAdjust(arr);
	printf("������Ľ��Ϊ: \n");
	for (int i = 0; i < LEN; ++i)
	{
		printf("%-4d", arr[i]);
		if ((i + 1) % 10 == 0)
		{
			printf("\n");
		}
	}
	printf("\n");
	system("pause");
	return 0;
}