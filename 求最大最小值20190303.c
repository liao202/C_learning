#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>

int randomNumber()
{
	return 0 + rand() % (100 - 0 + 1);
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
		printf("%d  ", arr[i]);
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

int* maxAndMin(int* arr, int len)
{
	quickSort(arr, 0, len - 1);
	int* ret = (int*)malloc(sizeof(int) * 2);
	ret[0] = arr[len - 1];
	ret[1] = arr[0];
	return ret;
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
	int* result = maxAndMin(arr, len);
	printf("The max and the min number is: \n");
	arrDisplay(result, 2);
	free(arr);
	arr = NULL;
	free(result);
	result = NULL;
	system("pause");
	return 0;
}