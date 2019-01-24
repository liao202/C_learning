#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int searchLonelyNumber(int arr[], int len)
{
	int ret = 0;

	for (int i = 0; i < len; ++i)
	{
		ret ^= arr[i];
	}

	return ret;
}

int main()
{
	int arr[] = {
		1, 2, 3, 4, 5, 4, 3, 2, 1
	};
	int target_number = 0;
	int len = sizeof(arr) / sizeof(arr[0]);

	target_number = searchLonelyNumber(arr, len);
	printf("只出现过一次的数为: %d\n",
		target_number);

	system("pause");
	return 0;
}