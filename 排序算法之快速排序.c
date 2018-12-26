/*
**	��������
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

#define LEN 8

/*---�����ӡ---*/
void arrDisplay(int arr[], int len)
{
	for (int i = 0; i < len; ++i)
	{
		printf("%-3d", arr[i]);
	}
	printf("\n");
}

/*---��������---*/
void quickSort(int arr[], int left, int right)
{
	if (left >= right)
	{
		return;
	}
	int i = left;
	int j = right;
	int value = arr[left];
	while (i < j)
	{
		while (i < j && value <= arr[j])
		{
			--j;
		}
		arr[i] = arr[j];
		while (i < j && value >= arr[i])
		{
			++i;
		}
		arr[j] = arr[i];
	}
	arr[i] = value;
	quickSort(arr, left, i - 1);
	quickSort(arr, i + 1, right);
}

int main()
{
	int arr[LEN] = { 49, 38, 65, 97, 
		76, 13, 27, 49 };
	printf("��ʼ�����ӡ: \n");
	arrDisplay(arr, LEN);
	quickSort(arr, 0,  LEN - 1);
	printf("���������Ľ������: \n");
	arrDisplay(arr, LEN);
	system("pause");
	return 0;
}