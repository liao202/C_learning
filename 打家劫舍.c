/*
**	��ҽ���
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"
#include "time.h"

#define LEN 50

/*---�����ӡ����---*/
void arrDisplay(int arr[])
{
	for (int i = 0; i < LEN; ++i)
	{
		printf("%-2d", arr[i]);
		if ((i + 1) % 10 == 0)
		{
			printf("\n");
		}
	}
	printf("\n");
}

/*---��ҽ��ắ��---*/
int rob(int arr[], int len)
{
	if (len <= 0)
	{
		return 0;
	}
	if (len == 1)
	{
		return arr[0];
	}
	int temp[LEN] = { 0 };
	int i = 0;
	temp[0] = arr[0];
	temp[1] = (arr[0] >= arr[1] ? arr[0] : arr[1]);
	for (i = 2; i < LEN; i++)
	{
		temp[i] = (arr[i] + temp[i - 2] > temp[i - 1] ? arr[i] + temp[i - 2] : temp[i - 1]);
	}
	return temp[i - 1];
}

int main()
{
	int arr[LEN] = { 0 };
	//����Ԫ�صĳ�ʼ��
	for (int i = 0; i < LEN; ++i)
	{
		//�������Χ[2, 8]
		arr[i] = 2 + rand() % (8 - 2 + 1);
	}
	printf("����50�ҵĿ�͵�ʽ�����: \n");
	arrDisplay(arr);
	printf("���Եõ�����߽��Ϊ: %d\n", rob(arr, LEN));
	system("pause");
	return 0;
}