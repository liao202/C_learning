/*
**	求斐波那契数列的第40项,观察第三项被计算了多少次
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

int count;

int fabonacci(int n)
{
	if (n <= 0)
	{
		return 0;
	}
	if (n == 1 || n == 2)
	{
		return 1;
	}
	if (n == 3)
	{
		++count;
	}
	return fabonacci(n - 1) + fabonacci(n - 2);
}

int main()
{
	printf("%d\n", fabonacci(40));
	printf("第三项计算了%d次!\n", count);
	system("pause");
	return 0;
}