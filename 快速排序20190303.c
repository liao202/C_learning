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
	int i = 0;
	for (i = 0; i < len; ++i)
	{
		arr[i] = randomNumber();
	}
}

void arrDisplay(int* arr, int len)
{
	int i = 0;
	for (i = 0; i < len; ++i)
	{
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
	int len = 0;
	printf("Please input the length of the array: \n");
	scanf("%d", &len);
	assert(len >= 0);
	arr = (int*)malloc(sizeof(int) * len);
	assert(arr != NULL);
	arrInit(arr, len);
	printf("The origin array is: \n");
	arrDisplay(arr, len);
	quickSort(arr, 0, len - 1);
	printf("The sorted array is: \n");
	arrDisplay(arr, len);
	free(arr);
	arr = NULL;
	system("pause");
	return 0;
}