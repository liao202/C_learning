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
		printf("%-4d", arr[i]);
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

int targetCnt(int arr[], int len, int target)
{
	int cnt = 0;
	int i = 0;
	for (i = 0; i < len; ++i)
	{
		if (arr[i] == target)
		{
			++cnt;
		}
	}
	return cnt;
}

int main()
{
	srand((unsigned int)time(0));
	int arr[N] = { 0 };
	int cnt = 0;
	int target = randomNumber();
	arrInit(arr, N);
	printf("The origin array is: \n");
	arrDisplay(arr, N);
	quickSort(arr, 0, N - 1);
	printf("The sorted array is: \n");
	arrDisplay(arr, N);
	cnt = targetCnt(arr, N, target);
	printf("目标值为: %d, 出现了%d次!\n", target, cnt);
	system("pause");
	return 0;
}