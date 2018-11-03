/*
** 2018_11_03
** C����
** ��д����ʵ������ĳ�ʼ������պ�����
*/

#include "stdio.h"
#include "stdlib.h"

#define array_len 10

void array_init(int* pa)
{
	for (int i = 0; i < array_len; i++)
	{
		*(pa + i) = i;
	}
}

void array_print(int* pa)
{
	for (int i = 0; i < array_len; i++)
	{
		printf("%d ", *(pa + i));
	}
	printf("\n");
}

void array_empty(int* pa)
{
	for (int i = 0; i < array_len; i++)
	{
		*(pa + i) = 0;
	}
}

void array_reverse(int* pa)
{
	int temp = 0;
	for (int i = 0; i < array_len / 2; i++)
	{
		temp = *(pa + i);
		*(pa + i) = *(pa + array_len - i - 1);
		*(pa + array_len - i - 1) = temp;
	}
}

int main()
{
	int arr[array_len] = { 0 };
	printf("��ʼ���������Ϊ: \n");
	array_init(arr);
	array_print(arr);
	printf("���ú������: \n");
	array_reverse(arr);
	array_print(arr);
	printf("�������: \n");
	array_empty(arr);
	array_print(arr);
	system("pause");
	return 0;
}