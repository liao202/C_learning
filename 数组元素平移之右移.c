/*
**	����Ԫ��ƽ��
**	������Ԫ��ѭ������ƽ��n��
**	�ƶ���������������ĳ���
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

#define LEN 6

/*---����Ԫ�ش�ӡ---*/
void arrDisplay(int arr[])
{
	for (int i = 0; i < LEN; ++i)
	{
		printf("%-3d", arr[i]);
	}
	printf("\n");
}

/*---����ѭ������1λ---*/
void rotateRight(int arr[])
{
	int temp = 0;
	/*---���ұߵ�Ԫ�ش�����---*/
	temp = arr[LEN - 1];
	/*---ÿλ������1λ---*/
	for (int i = 1; i < LEN; ++i)
	{
		arr[LEN - i] = arr[LEN - i - 1];
	}
	/*---�����Ҹ�������---*/
	arr[0] = temp;
}

int main()
{
	int n = 0;
	int arr[LEN] = { 1, 2, 3, 4, 5, 10 };
	printf("������ѭ�����Ƶ�λ��: \n");
	scanf("%d", &n);
	/*---ѭ������ǰ������---*/
	printf("ѭ������ǰ������: \n");
	arrDisplay(arr);
	/*---ѭ������nλ---*/
	for (int i = 0; i < n; ++i)
	{
		rotateRight(arr);
	}
	printf("ѭ������%dλ�������: \n", n);
	arrDisplay(arr);
	system("pause");
	return 0;
}