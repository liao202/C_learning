#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int findDuplicates(int arr[], int len)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < len; ++i)
	{
		int ret = arr[i];
		for (j = i + 1; j < len; ++j)
		{
			if (ret == arr[j])
			{
				return ret;
			}
		}
	}
	return -1;
}

int main()
{
	int arr[] = { 1, 3, 5, 2, 2 };
	int len = sizeof(arr) / sizeof(arr[0]);
	int target = findDuplicates(arr, len);
	printf("The duplicate number is: %d\n", target);
	system("pause");
	return 0;
}