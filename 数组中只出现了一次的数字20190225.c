#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

#define N 9

int lonelyNumber(int arr[], int len)
{
	int i = 0;
	int ret = 0;
	for (i = 0; i < len; ++i)
	{
		ret ^= arr[i];
	}
	return ret;
}

int main()
{
	int arr[N] = {
		1, 2, 3, 4, 5, 4, 3, 2, 1
	};
	int result = 0;
	result = lonelyNumber(arr, N);
	printf("The result is: %d\n", result);
	system("pause");
	return 0;
}