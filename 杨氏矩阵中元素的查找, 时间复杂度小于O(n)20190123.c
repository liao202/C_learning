#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

#define N 3

void findTarget(int arr[N][N], 
	int row, int col, int target)
{
	int i = 0;
	int j = col - 1;
	while (i < row && j >= 0)
	{
		if (target > arr[i][j])
		{
			++j;
		}
		else if (target < arr[i][j])
		{
			--i;
		}
		else
		{
			printf("找到了!\n");
			return;
		}
	}
	printf("没找到!\n");
	return;
}

int main()
{
	int arr[N][N] = {
		1, 2, 3, 4, 5, 6, 7, 8, 9
	};
	int target = 5;
	findTarget(arr, N, N, target);
	system("pause");
	return 0;
}