#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

#define N 9

// ±©Á¦½â·¨
int moreThanHalfArray1(int arr[], int len)
{
	if (arr == NULL || len <= 0)
	{
		return 0;
	}
	int i = 0;
	int j = 0;
	int value = 0;
	int cnt = 1;
	for (i = 0; i < len; ++i)
	{
		value = arr[i];
		for (j = i + 1; j < len; ++j)
		{
			if (value == arr[j])
			{
				++cnt;
			}
		}
		if (cnt > len / 2)
		{
			return value;
		}
	}
	return 0;
}

int moreThanHalfArray2(int arr[], int len)
{
	if (arr == NULL || len <= 0)
	{
		return 0;
	}
	int result = arr[0];
	int times = 1;
	int i = 0;
	for (i = 1; i < len; ++i)
	{
		if (times == 0)
		{
			result = arr[i];
			times = 1;
		}
		else if (result == arr[i])
		{
			++times;
		}
		else
		{
			--times;
		}
	}
	times = 0;
	for (i = 0; i < len; ++i)
	{
		if (arr[i] == result)
		{
			++times;
		}
	}
	return (times > len / 2) ? result : 0;
}

int main()
{
	int arr[N] = {
		1, 2, 3, 2, 2, 2, 5, 4, 2
	};
	int result1 = moreThanHalfArray1(arr, N);
	int result2 = moreThanHalfArray2(arr, N);
	printf("The result is: %d\n", result1);
	printf("The result is: %d\n", result2);
	system("pause");
	return 0;
}