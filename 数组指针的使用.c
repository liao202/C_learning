/*
**	数组指针的使用
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

void printArr1(int arr[3][5], int row, int col)
{
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			printf("%-3d", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

void printArr2(int (*arr)[5], int row, int col)
{
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			printf("%-3d", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

int main()
{
	int arr[3][5] = { 1, 2, 3,
		4, 5, 6, 7, 8, 9, 0 };
	printArr1(arr, 3, 5);
	printArr2(arr, 3, 5);
	system("pause");
	return 0;
}