/*
**	二维数组中元素的查找
**	在二维数组中找一个元素
**	行最大值的最小值
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

#define LEN 4

int main()
{
	int arr[LEN][LEN] = { { 1, 2, 3, 0 },
	{ 2, 3, 4, 5 }, { 3, 4, 5, 6 }, { 0, 2, 4, 6 } };
	int row = 0;
	int col = 0;
	int row_max = 0;
	int result = 0;
	//二维数组的打印
	for (int i = 0; i < LEN; ++i)
	{
		for (int j = 0; j < LEN; ++j)
		{
			printf("%-2d", arr[i][j]);
		}
		printf("\n");
	}
	for (int i = 0; i < LEN; ++i)
	{
		row_max = arr[i][0];
		int temp_col = 0;
		for (int j = 0; j < LEN; ++j)
		{
			if (row_max < arr[i][j])
			{
				row_max = arr[i][j];
				temp_col = j;
			}
		}
		if (i == 0)
		{
			result = row_max;
			row = i;
			col = temp_col;
		}
		else if (result > row_max)
		{
			result = row_max;
			row = i;
			col = temp_col;
		}
	}
	printf("结果为: %d, 其坐标为: (%d, %d)\n",
		arr[row][col], row, col);
	system("pause");
	return 0;
}