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

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void arrAdjust(int* arr, int left, int right)
{
	while (left < right)
	{
		if (arr[left] % 2 == 1)
		{
			++left;
		}
		if (arr[right] % 2 == 0)
		{
			--right;
		}
		if (left < right)
		{
			swap(&arr[left], &arr[right]);
		}
	}
}

int countOddNumber(int* arr, int len)
{
	int ret = 0;
	int i = 0;
	for (i = 0; i < len; ++i)
	{
		if (arr[i] % 2 == 1)
		{
			++ret;
		}
	}
	return ret;
}

int asc(int* a, int* b)
{
	return *a < *b;
}

int desc(int* a, int* b)
{
	return *a > *b;
}

typedef int (*Cmp)(int*, int*);

void bubbleSort(int* arr, int len, Cmp cmp)
{
	int bound = 0;
	for (bound = 0; bound < len; ++bound)
	{
		int cur = 0;
		for (cur = len - 1; cur > bound; --cur)
		{
			if (cmp(&arr[cur], &arr[cur - 1]))
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
	int odd_number = 0;
	printf("Please input the length of array: \n");
	scanf("%d", &len);
	assert(len >= 0);
	arr = (int*)malloc(sizeof(int) * len);
	assert(arr != NULL);
	arrInit(arr, len);
	printf("The origin array is: \n");
	arrDisplay(arr, len);
	arrAdjust(arr, 0, len - 1);
	printf("The array after adjust is: \n");
	arrDisplay(arr, len);
	odd_number = countOddNumber(arr, len);
	bubbleSort(arr, odd_number, desc);
	bubbleSort(arr + odd_number, len - odd_number, asc);
	printf("The result is: \n");
	arrDisplay(arr, len);
	free(arr);
	arr = NULL;
	system("pause");
	return 0;
}