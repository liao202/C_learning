#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>

int randomNumber()
{
	return 1 + rand() % (9 - 1 + 1);
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
		if (i % 10 == 0)
		{
			printf("\n");
		}
		printf("%-3d", arr[i]);
	}
	printf("\n");
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

int* twoSum(int* arr, int len, int target, int* returnSize)
{
	int i = 0;
	int j = len - 1;
	while (arr[i] + arr[j] != target)
	{
		if (arr[i] + arr[j] > target)
		{
			--j;
		}
		else
		{
			++i;
		}
	}
	*returnSize = 2;
	int* index = (int*)malloc(sizeof(int) * (*returnSize));
	assert(index != NULL);
	index[0] = i + 1;
	index[1] = j + 1;
	return index;
}

int main()
{
	srand((unsigned int)time(0));

	int* arr = NULL;
	int arr_length = 0;
	int* index = NULL;
	int returnSize = 0;
	int target = 0;

	printf("Please enter the length of the array: \n");
	scanf("%d", &arr_length);
	assert(arr_length >= 0);
	arr = (int*)malloc(sizeof(int) * arr_length);
	assert(arr != NULL);

	arrInit(arr, arr_length);
	printf("The origin array is: ");
	arrDisplay(arr, arr_length);
	quickSort(arr, 0, arr_length - 1);
	printf("The sorted array is: ");
	arrDisplay(arr, arr_length);
	printf("Please enter the target: \n");
	scanf("%d", &target);
	index = twoSum(arr, arr_length, target, &returnSize);
	printf("The index is: %d, %d\n", index[0], index[1]);

	free(index);
	index = NULL;
	free(arr);
	arr = NULL;

	system("pause");
	return 0;
}