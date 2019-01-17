/*
**	qSort�Ÿ�����
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"
#include "time.h"

#define LEN 20

//�����
int randomNumber()
{
	return 11 + rand() % (99 - 11 + 1);
}

//���������
double randomDoubleNumber()
{
	return randomNumber() +
		randomNumber() * 0.1 +
		randomNumber() * 0.01;
}

//�����ʼ��
void arrInit(double arr[], int len)
{
	for (int i = 0; i < len; ++i)
	{
		arr[i] = randomDoubleNumber();
	}
}

//�����ӡ����
void arrDisplay(double arr[], int len)
{
	for (int i = 0; i < len; ++i)
	{
		if (i % 10 == 0)
		{
			printf("\n");
		}
		printf("%-7.2f", arr[i]);
	}
	printf("\n");
}

//��������
void quickSort(double arr[], int left, int right)
{
	//����
	if (left > right)
	{
		return;
	}
	int i = left;
	int j = right;
	double value = arr[left];
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

int main()
{
	srand((unsigned int)time(0));
	double arr[LEN] = { 0 };
	arrInit(arr, LEN);
	printf("��ʼ�����ӡ����: ");
	arrDisplay(arr, LEN);
	quickSort(arr, 0, LEN - 1);
	printf("���������������ӡ����: ");
	arrDisplay(arr, LEN);
	system("pause");
	return 0;
}