/*
**	��������	
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

#define LEN 20

/*---�����ӡ����---*/
void arrDisplay(int arr[])
{
	for (int i = 0; i < LEN; ++i)
	{
		if (i % 10 == 0)
		{
			printf("\n");
		}
		printf("%-5d", arr[i]);
	}
	printf("\n");
}

/*---��������---*/
void quickSort(int arr[], int left, int right)
{
	if (left < right)
	{
		int i = left;
		int j = right;
		int x = arr[left];
		while (i < j)
		{
			while (i < j && arr[j] >= x)
			{
				--j;
			}
			if (i < j)
			{
				arr[i++] = arr[j];
			}
			while (i < j && arr[i] <= x)
			{
				++i;
			}
			if (i < j)
			{
				arr[j--] = arr[i];
			}
		}
		arr[i] = x;
		quickSort(arr, left, i - 1);
		quickSort(arr, i + 1, right);
	}
}

int main()
{
	int arr[LEN] = { 0 };
	//����Ԫ�صĳ�ʼ��
	for (int i = 0; i < LEN; ++i)
	{
		//�������Χ[1, 100]
		arr[i] = 1 + rand() % (100 - 1 + 1);
	}
	printf("����ǰ�������ӡ����: \n");
	arrDisplay(arr);
	quickSort(arr, 0, LEN - 1);
	printf("�����������ӡ����: \n");
	arrDisplay(arr);
	system("pause");
	return 0;
}