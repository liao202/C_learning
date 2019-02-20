#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 3

int randomNumber()
{
	return 11 + rand() % (99 - 11 + 1);
}

void arrInit(int arr[][N], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; ++i)
	{
		for (j = 0; j < col; ++j)
		{
			arr[i][j] = randomNumber();
		}
	}
}

void arrDisplay(int arr[][N], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; ++i)
	{
		for (j = 0; j < col; ++j)
		{
			printf("%-5d", arr[i][j]);
		}
		printf("\n");
	}
}

int diagonalSum(int arr[][N], int row, int col)
{
	int i = 0;
	int ret = 0;
	for (i = 0; i < row; ++i)
	{
		ret += arr[i][i];
	}
	for (i = 0; i < row; ++i)
	{
		if (N - 1 - i != i)
		{
			ret += arr[i][N - 1 - i];
		}
	}
	return ret;
}

int main()
{
	srand((unsigned int)time(0));

	int arr[N][N] = { 0 };
	int result = 0;

	arrInit(arr, N, N);
	printf("The array is: \n");
	arrDisplay(arr, N, N);
	result = diagonalSum(arr, N, N);
	printf("The sum of diagonal is: %d\n", result);

	system("pause");
	return 0;
}