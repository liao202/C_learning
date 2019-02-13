/*
**	�䳤����֮ѡ������
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>

int randomNumber()
{
	return 11 + rand() % (99 - 11 + 1);
}

void arrInit(int* arr, int len)
{
	for (int i = 0; i < len; ++i)
	{
		arr[i] = randomNumber();
	}
}

void arrDisplay(int* arr, int len)
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

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void selectSort(int* arr, int len)
{
	int i = 0;
	int j = 0;
	int min = 0;
	for (i = 0; i < len; ++i)
	{
		min = i;
		for (j = i + 1; j < len; ++j)
		{
			if (arr[min] > arr[j])
			{
				min = j;
			}
		}
		if (min != i)
		{
			swap(&arr[min], &arr[i]);
		}
	}
}

int main()
{
	srand((unsigned int)time(0));

	int* arr = NULL;
	int arr_length = 0;

	printf("���������鳤��: \n");
	scanf("%d", &arr_length);
	assert(arr_length >= 0);
	arr = (int*)malloc(sizeof(int) * arr_length);
	assert(arr != NULL);

	arrInit(arr, arr_length);
	printf("��ʼ�����ӡ����: ");
	arrDisplay(arr, arr_length);
	selectSort(arr, arr_length);
	printf("ѡ�������������ӡ����: ");
	arrDisplay(arr, arr_length);

	free(arr);
	arr = NULL;

	system("pause");
	return 0;
}