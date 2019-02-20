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

void selectSort(int arr[], int len)
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

	int arr[N] = { 0 };

	arrInit(arr, N);
	printf("The origin array is: \n");
	arrDisplay(arr, N);
	selectSort(arr, N);
	printf("The sorted array is: \n");
	arrDisplay(arr, N);

	system("pause");
	return 0;
}