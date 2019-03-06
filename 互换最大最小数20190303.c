#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>

int randomNumber()
{
	return 1 + rand() % (100 - 1 + 1);
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

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void swapMaxAndMin(int* arr, int len)
{
	int i = 0;
	int min = 0;
	int max = 0;
	for (i = 1; i < len; ++i)
	{
		if (arr[min] > arr[i])
		{
			min = i;
		}
		if (arr[max] < arr[i])
		{
			max = i;
		}
	}
	swap(&arr[min], &arr[max]);
}

int main()
{
	srand((unsigned int)time(0));
	int n = 0;
	int* nums = NULL;
	printf("Please input n: \n");
	scanf("%d", &n);
	assert(n >= 0);
	nums = (int*)malloc(sizeof(int) * n);
	assert(nums != NULL);
	arrInit(nums, n);
	printf("The origin array: \n");
	arrDisplay(nums, n);
	swapMaxAndMin(nums, n);
	printf("The array after swap: \n");
	arrDisplay(nums, n);
	system("pause");
	return 0;
}