/*
**	算法1.2 两个n阶矩阵的相乘
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"
#include "time.h"

#define N 4

// 随机数
int randomNumber()
{
	return 1 + rand() % (9 - 1 + 1);
}

// 矩阵初始化
void matrixInit(int matrix[][N],
	int row, int col)
{
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			matrix[i][j] = randomNumber();
		}
	}
}

// 矩阵打印
void matrixDisplay(int matrix[][N], 
	int row, int col)
{
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			printf("%-5d", matrix[i][j]);
		}
		printf("\n");
	}
}

// 矩阵相乘
void matrixMultiply(int matrix1[][N],
	int matrix2[][N], int matrix3[][N])
{
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			for (int k = 0; k < N; ++k)
			{
				matrix3[i][j] += matrix1[i][k] *
					matrix2[k][j];
			}
		}
	}
}

int main()
{
	srand((unsigned int)time(0));
	int matrix1[N][N] = { 0 };
	int matrix2[N][N] = { 0 };
	int matrix3[N][N] = { 0 };
	matrixInit(matrix1, N, N);
	matrixInit(matrix2, N, N);
	printf("矩阵1打印如下: \n");
	matrixDisplay(matrix1, N, N);
	printf("矩阵2打印如下: \n");
	matrixDisplay(matrix2, N, N);
	matrixMultiply(matrix1, matrix2, matrix3);
	printf("矩阵1 * 矩阵2结果打印如下: \n");
	matrixDisplay(matrix3, N, N);
	system("pause");
	return 0;
}