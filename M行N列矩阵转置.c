/*
**	M行N列矩阵的转置
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

#define M 3
#define N 4

int main()
{
	int arr_orig[M][N] = { { 1, 2, 3, 4 }, 
	{ 5, 6, 7, 8 }, { 9, 10, 11, 12 } };
	int arr_tran[N][M] = { 0 };
	printf("转置前的数组如下:\n");
	/*---数组打印---*/
	for (int i = 0; i < M; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			printf("%3d", arr_orig[i][j]);
		}
		printf("\n");
	}
	/*---数组的转置---*/
	for (int i = 0; i < M; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			int temp;
			temp = arr_orig[i][j];
			arr_orig[i][j] = arr_tran[j][i];
			arr_tran[j][i] = temp;
		}
	}
	/*---转置后数组---*/
	printf("转置后的数组如下: \n");
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < M; ++j)
		{
			printf("%3d", arr_tran[i][j]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}