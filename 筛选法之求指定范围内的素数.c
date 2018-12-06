/*
**	筛选法
**	求指定范围内的素数
**	2~100
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

#define N 100

int main()
{
	int arr[N] = { 0 };
	//数组赋初值
	for (int i = 1; i < N; ++i)
	{
		arr[i] = i + 1;
	}
	for (int i = 1; i < N; ++i)
	{
		if (arr[i] == 0)
		{
			continue;
		}
		//判断arr[j]是不是素数
		for (int j = i + 1; j < N; ++j)
		{
			if (arr[j] % arr[i] == 0)
			{
				arr[j] = 0;
			}
		}
	}
	//筛选输出
	for (int i = 1, j = 0; i < N; ++i)
	{
		if (arr[i] != 0)
		{
			++j;
			printf("%-4d", arr[i]);
			if (j % 5 == 0)
			{
				printf("\n");
			}
		}
	}
	system("pause");
	return 0;
}