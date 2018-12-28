/*
**	�������е��������
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

#define LEN 4

//��������
void quickSort(int arr[], int left, int right)
{
	//����
	if (left > right)
	{
		return;
	}
	int i = left;
	int j = right;
	int value = arr[left];
	while (i < j)
	{
		while (i < j && arr[j] >= value)
		{
			--j;
		}
		arr[i] = arr[j];
		while (i < j && arr[i] <= value)
		{
			++i;
		}
		arr[j] = arr[i];
	}
	arr[i] = value;
	quickSort(arr, left, i - 1);
	quickSort(arr, i + 1, right);
}

//ȥ��, �����ص������ֵ
int removeDuplicates(int arr[], int len)
{
	//ȥ��
	int count = 0;
	for (int i = 0; i < len; ++i)
	{
		if (arr[count] != arr[i])
		{
			++count;
			arr[count] = arr[i];
		}
	}
	//������
	if (count < 2)
	{
		return arr[count];
	}
	else
	{
		return arr[count - 2];
	}
}

int main()
{
	int arr[LEN] = { 2, 2, 3, 1 };
	int result = 0;
	quickSort(arr, 0, LEN - 1);
	result = removeDuplicates(arr, LEN);
	printf("�����е����������: %d\n", result);
	system("pause");
	return 0;
}