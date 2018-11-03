/*
** 2018_11_03
** C语言
** 编写函数判断一个数是不是素数
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"
#include "math.h"

void is_prime_number(int n)
{
	int k = sqrt((double)n);
	int j = 0;
	for (j = 2; j <= k; j++)
	{
		if (n % j == 0)
		{
			printf("%d不是素数!\n", n);
			break;
		}
	}
	if (j >= k + 1)
		printf("%d是素数!\n", n);
}

int main()
{
	int n = 0;
	printf("请输入一个数: \n");
	scanf("%d", &n);
	is_prime_number(n);
	system("pause");
	return 0;
}