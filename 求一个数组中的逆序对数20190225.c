#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>

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

int reversePairs(int arr[], int len)
{
	int i = 0;
	int j = 0;
	int ret = 0;
	for (i = 0; i < len; ++i)
	{
		int value = arr[i];
		for (j = i + 1; j < len; ++j)
		{
			if (arr[i] > arr[j])
			{
				++ret;
			}
		}
	}
	return ret;
}

int main()
{
	srand((unsigned int)time(0));
	int arr[N] = { 0 };
	int pairs = 0;
	arrInit(arr, N);
	printf("The origin array is: \n");
	arrDisplay(arr, N);
	pairs = reversePairs(arr, N);
	printf("There are %d pairs in array!\n", pairs);
	system("pause");
	return 0;
}