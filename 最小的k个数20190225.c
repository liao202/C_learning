#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>

int randomNumber()
{
	return 11 + rand() % (99 - 11 + 1);
}

void numsInit(int* nums, int len)
{
	int i = 0;
	for (i = 0; i < len; ++i)
	{
		nums[i] = randomNumber();
	}
}

void numsDisplay(int* nums, int len)
{
	int i = 0;
	for (i = 0; i < len; ++i)
	{
		printf("%-3d", nums[i]);
	}
	printf("\n");
}

void quickSort(int* nums, int left, int right)
{
	if (left > right)
	{
		return;
	}
	int i = left;
	int j = right;
	int value = nums[left];
	while (i < j)
	{
		while (i < j && nums[j] >= value)
		{
			--j;
		}
		nums[i] = nums[j];
		while (i < j && nums[i] <= value)
		{
			++i;
		}
		nums[j] = nums[i];
	}
	nums[i] = value;
	quickSort(nums, left, i - 1);
	quickSort(nums, i + 1, right);
}

int* getLeastNumbers(int* nums, int len, int k)
{
	quickSort(nums, 0, len - 1);
	int* ret = (int*)malloc(sizeof(int) * k);
	int i = 0;
	for (i = 0; i < k; ++i)
	{
		ret[i] = nums[i];
	}
	return ret;
}

int main()
{
	srand((unsigned int)time(0));
	int* nums = NULL;
	int* result = NULL;
	int n = 0;
	int k = 0;
	printf("Please input n: \n");
	scanf("%d", &n);
	printf("Please input k: \n");
	scanf("%d", &k);
	nums = (int*)malloc(sizeof(int) * n);
	numsInit(nums, n);
	printf("The numbers: \n");
	numsDisplay(nums, n);
	result = getLeastNumbers(nums, n, k);
	printf("The result is: \n");
	numsDisplay(result, k);
	free(nums);
	nums = NULL;
	free(result);
	result = NULL;
	system("pause");
	return 0;
}