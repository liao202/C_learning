/*
**	两个基本递归求前n项和与求前n项积
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

// 前n项和
int sum(int n)
{
	if (n <= 0)
	{
		return -1;
	}
	if (n == 1)
	{
		return 1;
	}
	return n + sum(n - 1);
}

// 前n项积
int mul(int n)
{
	if (n < 0)
	{
		return -1;
	}
	if (n == 0)
	{
		return 0;
	}
	if (n == 1)
	{
		return 1;
	}
	return n * mul(n - 1);
}

// 阶乘运算
int factorial(int n)
{
	if (n < 0)
	{
		return -1;
	}
	if (n == 0)
	{
		return 1;
	}
	return n * factorial(n - 1);
}

int main()
{
	int sum_result = sum(5);
	int mul_result = mul(5);
	int factorial_result = factorial(5);
	printf("%d\n", sum_result);
	printf("%d\n", mul_result);
	printf("%d\n", factorial_result);
	system("pause");
	return 0;
}