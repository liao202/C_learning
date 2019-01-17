/*
**	�ҳ�һ�������е�������������
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

#define LEN 14

//Ѱ������������
void findLonelyNumber(int arr[], int len, 
	int* num1, int* num2)
{
	int temp = 0;
	int pos = -1;
	//���������
	for (int i = 0; i < len; ++i)
	{
		temp ^= arr[i];
	}
	//�ҵ��������ĳ��1��λ��
	for (int i = 0; i < 32; ++i)
	{
		if (((temp >> i) & 1) == 1)
		{
			pos = i;
			break;
		}
	}
	//�������1��λ�ý������Ϊ����
	for (int i = 0; i < len; ++i)
	{
		//�ֱ��ÿһ���������
		if (((arr[i] >> pos) & 1) == 1)
		{
			*num1 ^= arr[i];
		}
		else
		{
			*num2 ^= arr[i];
		}
	}
}

int main()
{
	int arr[] = { 6, 3, 2, 9, 8,
		3, 5, 6, 1, 7, 8, 1, 2, 9 };
	int num1 = 0;
	int num2 = 0;
	findLonelyNumber(arr, LEN, &num1, &num2);
	printf("����������Ϊ: %d %d\n", num1, num2);
	system("pause");
	return 0;
}