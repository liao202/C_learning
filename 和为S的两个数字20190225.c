#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

int randomNumber()
{
	return 1 + rand() % (9 - 1 + 1);
}

void arrInit(int arr[], int len)
{
	int i = 0;
	for (i = 0; i < len; ++i)
	{
		arr[i] = randomNumber();
	}
}

void arrDisplay(int arr[], int len)
{
	int i = 0;
	for (i = 0; i < len; ++i)
	{
		printf("%-3d", arr[i]);
	}
	printf("\n");
}

void quickSort(int arr[], int left, int right)
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

int* findNumberWithSum(int arr[], int len, int s)
{
	if (arr == NULL || len <= 0)
	{
		return NULL;
	}
	int i = 0;
	int j = 0;
	for (i = 0; i < len; ++i)
	{
		int value = s - arr[i];
		for (j = i + 1; j < len; ++j)
		{
			if (value == arr[j])
			{
				int* ret = (int*)malloc(sizeof(int) * 2);
				ret[0] = i;
				ret[1] = j;
				return ret;
			}
		}
	}
	return NULL;
}

int main()
{
	int s = 0;
	int arr[N] = { 0 };
	arrInit(arr, N);
	quickSort(arr, 0, N - 1);
	printf("The sorted array is: \n");
	arrDisplay(arr, N);
	printf("Please input s: \n");
	scanf("%d", &s);
	int* result = findNumberWithSum(arr, N, s);
	if (result != NULL)
	{
		printf("查找成功, 下标为: (%d, %d)\n", 
			result[0] + 1, result[1] + 1);
		printf("两数的值为: %d %d\n", 
			arr[result[0]], arr[result[1]]);
	}
	else
	{
		printf("查找失败!\n");
	}
	free(result);
	result = NULL;
	system("pause");
	return 0;
}