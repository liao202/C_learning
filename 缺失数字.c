/*
**	È±Ê§Êý×Ö
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

#define LEN 9

//È±Ê§Êý×Ö
int missingNumber(int arr[], int len)
{
	int sum_1 = 0;
	int sum_2 = 0;
	sum_1 = (1 + len) * len / 2;
	for (int i = 0; i < len; ++i)
	{
		sum_2 += arr[i];
	}
	return sum_1 - sum_2;
}

int main()
{
	int arr[LEN] = { 9, 1, 3, 5, 7, 4, 6, 2, 0 };
	int missing_number = 0;
	missing_number = missingNumber(arr, LEN);
	printf("È±Ê§µÄÊý×ÖÎª: %d\n", missing_number);
	system("pause");
	return 0;
}