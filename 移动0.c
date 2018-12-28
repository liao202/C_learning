/*
**	�������е�0�ƶ�����������
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"
#include "time.h"

#define LEN 40

//�����ӡ
void arrDisplay(int arr[], int len)
{
	for (int i = 0; i < len; ++i)
	{
		if (i % 10 == 0)
		{
			printf("\n");
		}
		printf("%-2d", arr[i]);
	}
	printf("\n");
}

//������Ԫ��0�ĵ���
void moveZeros(int arr[], int len)
{
	int count = 0;
	for (int i = 0; i < len; ++i)
	{
		if (arr[i] != 0)
		{
			arr[count] = arr[i];
			++count;
		}
	}
	while (count < len)
	{
		arr[count] = 0; 
		++count;
	}
}

int main()
{
	srand((unsigned int)time(0));
	int arr[LEN] = { 0 };
	//����Ԫ�صĳ�ʼ��
	for (int i = 0; i < LEN; ++i)
	{
		//���ֵ��Χ[0, 9]
		arr[i] = 0 + rand() % (9 - 0 + 1);
	}
	printf("��ʼ�����ӡ����: \n");
	arrDisplay(arr, LEN);
	moveZeros(arr, LEN);
	printf("������������ӡ����: \n");
	arrDisplay(arr, LEN);
	system("pause");
	return 0;
}