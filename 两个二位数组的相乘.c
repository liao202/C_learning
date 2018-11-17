/*
**	两个二维数组相乘	
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

int main()
{
	int array_a[3][4] = { { 1, 1, 1, 1 }, { 1, 1, 1, 1 }, {1, 1, 1, 1}};
	int array_b[4][5] = { { 1, 1, 1, 1, 1 }, { 1, 1, 1, 1, 1 },
	{ 1, 1, 1, 1, 1 }, { 1, 1, 1, 1, 1 }};
	int array_result[3][5] = {0};
	/*---a × b = result---*/
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			for (int k = 0; k < 4; k++)
			{
				array_result[i][j] += array_a[i][k] + array_b[k][j];
			}
		}
	}
	printf("The result is below: \n");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%-3d", array_result[i][j]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}