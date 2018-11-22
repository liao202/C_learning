/*
**	M��N�о����ת��
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
	printf("ת��ǰ����������:\n");
	/*---�����ӡ---*/
	for (int i = 0; i < M; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			printf("%3d", arr_orig[i][j]);
		}
		printf("\n");
	}
	/*---�����ת��---*/
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
	/*---ת�ú�����---*/
	printf("ת�ú����������: \n");
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