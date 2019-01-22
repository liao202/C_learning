/*
**	�䳤����֮��������
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

void quickSort(int* arr, int left, int right)
{
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
	printf("��ʼ�����ӡ: ");
	arrDisplay(arr, arr_length);
	quickSort(arr, 0, arr_length - 1);
	printf("���������������ӡ����: ");
	arrDisplay(arr, arr_length);

	free(arr);

	system("pause");
	return 0;
}