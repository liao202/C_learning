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

void numInsert(int arr[], int len, int value)
{
	int i = 0;
	int j = 0;
	while (value > arr[i] && i < N)
	{
		++i;
	}
	for (j = len - 1; j > i; --j)
	{
		arr[j] = arr[j - 1];
	}
	arr[i] = value;
}

int main()
{
	srand((unsigned int)time(0));

	int arr[N + 1] = { 0 };
	int value = 0;

	arrInit(arr, N);
	printf("The origin array is: \n");
	arrDisplay(arr, N);
	quickSort(arr, 0, N - 1);
	printf("The sorted array is: \n");
	arrDisplay(arr, N);
	printf("Please enter the insert number: \n");
	scanf("%d", &value);
	numInsert(arr, N + 1, value);
	printf("The array after insert number is: \n");
	arrDisplay(arr, N + 1);

	system("pause");
	return 0;
}