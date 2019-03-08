#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

#define N 4

void matrixDisplay(int arr[][N], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; ++i)
	{
		for (j = 0; j < col; ++j)
		{
			printf("%-4d", arr[i][j]);
		}
		printf("\n");
	}
}

// 打印矩阵的一圈
void matrixCirclePrint(int arr[][N], int row, int col, int start)
{
	int i = 0;
	int end_x = col - 1 - start;
	int end_y = row - 1 - start;
	// 从左到右打印一行
	for (i = start; i <= end_x; ++i)
	{
		printf("%-3d", arr[start][i]);
	}
	// 从上到下打印一列
	if (start < end_y)
	{
		for (i = start + 1; i <= end_y; ++i)
		{
			printf("%-3d", arr[i][end_x]);
		}
	}
	// 从右到左打印一行
	if (start < end_x && start < end_y)
	{
		for (i = end_x - 1; i >= start; --i)
		{
			printf("%-3d", arr[end_y][i]);
		}
	}
	// 从下到上打印一列
	if (start < end_x && start < end_y - 1)
	{
		for (i = end_y - 1; i >= start + 1; --i)
		{
			printf("%-3d", arr[i][start]);
		}
	}
}

void matrixPrint(int arr[][N], int row, int col)
{
	if (arr == NULL || row <= 0 || col <= 0)
	{
		return;
	}
	int start = 0;
	while (row > start * 2 && col > start * 2)
	{
		matrixCirclePrint(arr, row, col, start);
		++start;
	}
}

int main()
{
	int arr[N][N] = {
		1, 2, 3, 4, 5, 6, 7, 8,
		9, 10, 11, 12, 13, 14, 15, 16
	};
	printf("The origin array is: \n");
	matrixDisplay(arr, N, N);
	printf("The matrix from outside to inside is: \n");
	matrixPrint(arr, N, N);
	system("pause");
	return 0;
}