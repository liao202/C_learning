/*
**	���ֲ���
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"
#include "time.h"

#define LEN 20

//���ֵ
int randomNumber()
{
	return 11 + rand() % (99 - 11 + 1);
}

//�����ʼ��
void arrInit(int arr[], int len)
{
	for (int i = 0; i < len; ++i)
	{
		arr[i] = randomNumber();
	}
}

//�����ӡ
void arrDisplay(int arr[], int len)
{
	for (int i = 0; i < len; ++i)
	{
		if (i % 10 == 0)
		{
			printf("\n");
		}
		printf("%-5d", arr[i]);
	}
	printf("\n");
}

//��������
void quickSort(int arr[],
	int left, int right)
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

void binarySearch(int arr[],
	int left, int right, int target)
{
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (target > arr[mid])
		{
			left = mid + 1;
		}
		else if (target < arr[mid])
		{
			right = mid - 1;
		}
		else
		{
			printf("�ҵ���!\n");
			return;
		}
	}
	printf("û�ҵ�!\n");
	return;
}

int main()
{
	srand((unsigned int)time(0));
	int arr[LEN] = { 0 };
	int target = randomNumber();
	arrInit(arr, LEN);
	printf("��ʼ�����ӡ����: ");
	arrDisplay(arr, LEN);
	quickSort(arr, 0, LEN - 1);
	printf("���������������ӡ����: ");
	printf("Ŀ��ֵ: %d\n", target);
	binarySearch(arr, 0, LEN - 1, target);
	system("pause");
	return 0;
}