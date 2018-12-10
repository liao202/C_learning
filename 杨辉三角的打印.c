/*
**	屏幕上打印杨辉三角
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

#define LEN 10

int main()
{
	int arr[LEN][LEN] = { 0 };
	//前两行全为1
	for (int i = 0; i < LEN; ++i)
	{
		for (int j = 0; j <= i; ++j)
		{
			arr[i][j] = 1;
		}
	}
	//第三行起, 每个元素等于上面左右两边之和
	//arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1]
	for (int i = 2; i < LEN; ++i)
	{
		for (int j = 1; j < i; ++j)
		{
			arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
		}
	}
	//结果打印
	printf("杨辉三角打印如下: \n");
	for (int i = 0; i < LEN; ++i)
	{
		for (int j = 0; j <= i; ++j)
		{
			printf("%-6d", arr[i][j]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}