#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

#define N 3

int findEle(int arr[N][N], int row, int col, int target)
{
	int i = 0;
	int j = row - 1;
	while (i < row && j >= 0)
	{
		if (target > arr[i][j])
		{
			++i;
		}
		else if (target < arr[i][j])
		{
			--j;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int main()
{
	int arr[N][N] = {
		1, 2, 3, 4, 5, 6, 7, 8, 9
	};
	int target = 0;
	int flag = 0;
	printf("Please enter the target: \n");
	scanf("%d", &target);
	flag = findEle(arr, N, N, target);
	if (flag)
	{
		printf("Find Successful!\n");
	}
	else
	{
		printf("Find Failed!\n");
	}
	system("pause");
	return 0;
}