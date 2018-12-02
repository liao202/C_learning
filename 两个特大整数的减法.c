/*
**	两个特大整数的减法, 数组实现
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

#define LEN 20

int main()
{
	int m[LEN] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9,
		0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int n[LEN] = { 0, 0, 8, 7, 6, 5, 4, 3, 2, 1,
		0, 0, 1, 2, 3, 4, 5, 6, 7, 8 };
	int result[LEN] = { 0 };
	int index = 0;
	/*---被减数打印---*/
	printf(" ");
	for (int i = LEN - 1; i >= 0; --i)
	{
		printf("%d", m[i]);
	}
	printf("\n                    -\n");
	/*---减数打印---*/
	printf(" ");
	for (int i = LEN - 1; i >= 0; --i)
	{
		printf("%d", n[i]);
	}
	/*---结果计算---*/
	while (index < LEN)
	{
		if (m[index] < n[index])
		{
			m[index + 1] -= 1;
			result[index] = m[index] - n[index] + 10;
			++index;
			continue;
		}
		result[index] = m[index] - n[index];
		++index;
	}
	printf("\n                    =\n");
	/*---结果打印---*/
	printf(" ");
	for (int i = LEN - 1; i >= 0; --i)
	{
		printf("%d", result[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}