#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

int randomNumber()
{
	return 11 + rand() % (99 - 11 + 1);
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

void bubbleSort(int arr[], int len)
{
	int bound = 0;
	for (bound = 0; bound < len; ++bound)
	{
		int cur = 0;
		for (cur = len - 1; cur > bound; --cur)
		{
			if (arr[cur] > arr[cur - 1])
			{
				swap(&arr[cur], &arr[cur - 1]);
			}
		}
	}
}

int minNumberInArray(int arr[], int len)
{
	int min = arr[0];
	int i = 0;
	for (i = 1; i < len; ++i)
	{
		if (min > arr[i])
		{
			min = arr[i];
		}
	}
	return min;
}

int main()
{
	srand((unsigned int)time(0));
	int arr[N] = { 0 };
	int min = 0;
	arrInit(arr, N);
	printf("The origin array is: \n");
	arrDisplay(arr, N);
	bubbleSort(arr, N);
	printf("The sorted array is: \n");
	arrDisplay(arr, N);
	min = minNumberInArray(arr, N);
	printf("The min number is: %d\n", min);
	system("pause");
	return 0;
}