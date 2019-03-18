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

void selectSort(int* arr, int len)
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

void insertSort(int* arr, int len)
{
	int i = 0;
	int j = 0;
	int temp = 0;
	for (i = 1; i < len; ++i)
	{
		if (arr[i] < arr[i - 1])
		{
			temp = arr[i];
			for (j = i - 1; j >= 0 && arr[j] > temp; --j)
			{
				arr[j + 1] = arr[j];
			}
			arr[j + 1] = temp;
		}
	}
}

void shellSort(int* arr, int len)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int gap = 0;
	int temp = 0;
	for (gap = len / 2; gap > 0; gap /= 2)
	{
		for (i = 0; i < gap; ++i)
		{
			for (j = i + gap; j < len; j += gap)
			{
				if (arr[j] < arr[j - gap])
				{
					temp = arr[j];
					for (k = j - gap; k >= 0 && arr[k] > temp; k -= gap)
					{
						arr[k + gap] = arr[k];
					}
					arr[k + gap] = temp;
				}
			}
		}
	}
}

int main()
{
	srand((unsigned int)time(0));
	int* arr = NULL;
	int len = 0;
	printf("Please input the length of array: \n");
	scanf("%d", &len);
	assert(len >= 0);
	arr = (int*)malloc(sizeof(int) * len);
	assert(arr != NULL);
	arrInit(arr, len);
	printf("The origin array is: \n");
	arrDisplay(arr, len);
	//bubbleSort(arr, len);
	//quickSort(arr, 0, len - 1);
	//selectSort(arr, len);
	//insertSort(arr, len);
	shellSort(arr, len);
	printf("The sorted array is: \n");
	arrDisplay(arr, len);
	free(arr);
	arr = NULL;
	system("pause");
	return 0;
}