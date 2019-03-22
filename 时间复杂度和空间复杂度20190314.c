#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>

int randomNumber()
{
	return 11 + rand() % (99 - 11 + 1);
}

// 时间复杂度O(n)
void arrInit(int* arr, int len)
{
	assert(arr != NULL);
	assert(len >= 0);
	int i = 0;
	for (i = 0; i < len; ++i)
	{
		arr[i] = randomNumber();
	}
}

// 时间复杂度O(n)
void arrDisplay(int* arr, int len)
{
	assert(arr != NULL);
	assert(len >= 0);
	int i = 0;
	for (i = 0; i < len; ++i)
	{
		printf("%-5d", arr[i]);
	}
	printf("\n");
}

// 时间复杂度O(1)
void swap(int* a, int* b)
{
	assert(a != NULL);
	assert(b != NULL);
	int temp = *a;
	*a = *b;
	*b = temp;
}

// 时间复杂度O(n^2)
void bubbleSort(int* arr, int len)
{
	assert(arr != NULL);
	assert(len >= 0);
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

// 时间复杂度O(n^2)
void bubbleSort1(int* arr, int len)
{
	assert(arr != NULL);
	assert(len >= 0);
	int i = 0;
	for (i = 0; i < len; ++i)
	{
		int flag = 0;
		int j = 0;
		for (j = 0; j < len - i - 1; ++j)
		{
			if (arr[j] > arr[j + 1])
			{
				swap(&arr[j], &arr[j + 1]);
				flag = 1;
			}
		}
		if (flag == 0)
		{
			break;
		}
	}
}

void quickSort(int* arr, int left, int right)
{
	assert(arr != NULL); 
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

// 左闭右闭
// 时间复杂度O(log2N)
void binarySearch(int* arr, int len, int target)
{
	assert(arr != NULL);
	int left = 0;
	int right = len - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (target > arr[mid])
		{
			left = mid + 1;
		}
		else if (target < arr[mid])
		{
			right = mid - 1;
		}
		else
		{
			printf("Search Successful!\n");
			return;
		}
	}
	printf("Search Failed!\n");
}

void binarySearch1(int* arr, int size, int target)
{
	assert(arr != NULL);
	int left = 0;
	int right = size;
	while (left < right)
	{
		int mid = (left + right) / 2;
		if (target > arr[mid])
		{
			left = mid + 1;
		}
		else if (target < arr[mid])
		{
			right = mid;
		}
		else
		{
			printf("Search Successful!\n");
			return;
		}
	}
	printf("Search Failed!\n");
}

int main()
{
	srand((unsigned int)time(0));
	int* arr = NULL;
	int len = 0; 
	int target = randomNumber();
	printf("Please input the length of the array: \n");
	scanf("%d", &len);
	assert(len >= 0);
	arr = (int*)malloc(sizeof(int) * len);
	assert(arr != NULL);
	arrInit(arr, len);
	printf("The origin array is: \n");
	arrDisplay(arr, len);
	quickSort(arr, 0, len - 1);
	//bubbleSort1(arr, len);
	printf("The sorted array is: \n");
	arrDisplay(arr, len);
	printf("Target: %d\n", target);
	binarySearch(arr, len, target);
	free(arr);
	arr = NULL;
	system("pause");
	return 0;
}