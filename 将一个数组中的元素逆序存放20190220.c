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

void arrReverse(int arr[], int left, int right)
{
	while (left <= right)
	{
		swap(&arr[left++], &arr[right--]);
	}
}

int main()
{
	srand((unsigned int)time(0));

	int arr[N] = { 0 };

	arrInit(arr, N);
	printf("The array is: \n");
	arrDisplay(arr, N);
	arrReverse(arr, 0, N - 1);
	printf("The reverse array is: \n");
	arrDisplay(arr, N);

	system("pause");
	return 0;
}