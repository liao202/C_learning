/*
**	Ѱ��������ֻ���ֹ�һ�ε�������
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

#define LEN 100

//Ѱ������ֻ���ֹ�һ�ε���
void twoLonelyNumber(int arr[], int len,
	int* p1, int* p2)
{
	int temp = 1;
	int posi = 0;
	//�����������
	for (int i = 0; i < len; ++i)
	{
		temp ^= arr[i];
	}
	//Ѱ������������е����һ��1��λ��										
	for (int i = 0; i < 32; ++i)
	{
		if (((temp >> i) & 1) == 1)
		{
			posi = i;
			break;
		}
	}
	//�����������Ľ����ĳһ��λ���Ƿ�Ϊ1
	//��Ϊ����
	for (int i = 0; i < len; ++i)
	{
		//����ֱ��������
		if (((arr[i] >> posi) & 1) == 1)
		{
			*p1 ^= arr[i];
		}
		else
		{
			*p2 ^= arr[i];
		}
	}
}

int main()
{
	int arr[LEN] = { 4, 2, 7, 6, 3,
		5, 1, 2, 4, 3, 6, 5 };
	int num1 = 1;
	int num2 = 1;
	int len = sizeof(arr) / sizeof(arr[0]);
	twoLonelyNumber(arr, len, &num1, &num2);
	printf("ֻ���ֹ�һ�ε��������ֱ�Ϊ: %d, %d\n",
		num1, num2);
	system("pause");
	return 0;
}