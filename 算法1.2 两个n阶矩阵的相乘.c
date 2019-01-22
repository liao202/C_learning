/*
**	�㷨1.2 ����n�׾�������
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"
#include "time.h"

#define N 4

// �����
int randomNumber()
{
	return 1 + rand() % (9 - 1 + 1);
}

// �����ʼ��
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

// �����ӡ
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

// �������
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
	printf("����1��ӡ����: \n");
	matrixDisplay(matrix1, N, N);
	printf("����2��ӡ����: \n");
	matrixDisplay(matrix2, N, N);
	matrixMultiply(matrix1, matrix2, matrix3);
	printf("����1 * ����2�����ӡ����: \n");
	matrixDisplay(matrix3, N, N);
	system("pause");
	return 0;
}