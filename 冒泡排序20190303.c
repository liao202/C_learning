#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <time.h>

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

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void bubbleSort(int* arr, int len)
{
	int bound = 0;
	for (bound = 0; bound < len; ++bound)
	{
		int cur = 0;
		for (cur = len - 1; cur > bound; --cur)
		{
			if (arr[cur] < arr[cur - 1])
			{
				swap(&arr[cur], &arr[cur - 1]);
			}
		}
	}
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
	bubbleSort(arr, len);
	printf("The array after bubble sort: \n");
	arrDisplay(arr, len);
	free(arr);
	arr = NULL;
	system("pause");
	return 0;
}