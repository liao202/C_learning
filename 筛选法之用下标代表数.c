/*
**	筛选法之用下标代表数
**	下标对应的数组内容为判断标志
**	2~100
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

#define N 100

int main()
{
	int arr[N] = { 0 };
	//数组元素全部初始化为1
	for (int i = 1; i < N; ++i)
	{
		arr[i] = 1;
	}
	//筛选素数
	for (int i = 1; i < N; ++i)
	{
		if (arr[i] == 0)
		{
			continue;
		}
		for (int j = i + 1; j < N + 1; ++j)
		{
			if ((j + 1) % (i + 1) == 0)
			{
				arr[j] = 0;
			}
		}
	}
	//结果打印
	for (int i = 1, j = 0; i < N; ++i)
	{
		if (arr[i] != 0)
		{
			++j;
			printf("%-4d", i + 1);
			if (j % 5 == 0)
			{
				printf("\n");
			}
		}
	}
	system("pause");
	return 0;
}