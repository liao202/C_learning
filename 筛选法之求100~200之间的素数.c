/*
**	筛选法之求100~200之间的素数
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

#define N 200

int main()
{
	int arr[N] = { 0 };
	//数组赋初值
	for (int i = 1; i < N; ++i)
	{
		arr[i] = i + 1;
	}
	//筛选法
	for (int i = 1; i < N; ++i)
	{
		if (arr[i] == 0)
		{
			continue;
		}
		for (int j = i + 1; j < N; ++j)
		{
			if (arr[j] % arr[i] == 0)
			{
				arr[j] = 0;
			}
		}
	}
	//结果打印
	for (int i = 99, j = 0; i < N; ++i)
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
	printf("\n");
	system("pause");
	return 0;
}