#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int divisorCount(int n)
{
	int i = 0;
	int cnt = 0;
	for (i = 1; i <= n; ++i)
	{
		if (n % i == 0)
		{
			++cnt;
		}
	}
	return cnt;
}

void divisorDisplay(int* nums, int n)
{
	int i = 0;
	for (i = 0; i < n; ++i)
	{
		printf("%d ", divisorCount(nums[i]));
	}
	printf("\n");
}

int main()
{
	int n = 0;
	int i = 0;
	int* nums = NULL;
	printf("Please input n: \n");
	scanf("%d", &n);
	assert(n >= 0);
	nums = (int*)malloc(sizeof(int) * n);
	assert(nums != NULL);
	printf("Please input numbers: \n");
	for (i = 0; i < n; ++i)
	{
		scanf("%d", &nums[i]);
	}
	divisorDisplay(nums, n);
	free(nums);
	nums = NULL;
	system("pause");
	return 0;
}