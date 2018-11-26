/*
**	高效的斐波那契数列的递归求法
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

int count = 0;

/*---优化的递归---*/
/*
**	结果如下
**	102334155
**	第三项被计算了1次!
*/
int fibonacci(int first, int second, int n)
{
	if (n < 3)
	{
		return 1;
	}
	if (n == 3)
	{
		/*---统计第三项被计算了多少次---*/
		++count;
		return first + second;
	}
	return fibonacci(second, first + second, n - 1);
}

/*---优化前的递归---*/
/*
**	结果如下
**	102334155
**	第三项被计算了39088169次!
*/
int fibonacci(int n)
{
	if (n < 2)
	{
		return n;
	}
	if (n == 2)
	{
		return 1;
	}
	if (n == 3)
	{
		/*---统计第三项被计算了多少次---*/
		++count;
	}
	return fibonacci(n - 1) + fibonacci(n - 2);
}

/*---非递归算法---*/
int fibonacci(int n)
{
	if (n < 2)
	{
		return n;
	}
	if (n == 2)
	{
		return 1;
	}
	int n_1 = 1;
	int n_2 = 1;
	int n_n = 0;
	for (int i = 3; i <= n; ++i)
	{
		n_n = n_1 + n_2;
		n_1 = n_2;
		n_2 = n_n;
 	}
	return n_n;
}

int main()
{
	printf("%d\n", fibonacci(1, 1, 40));
	printf("第三项被计算了%d次!\n", count);
	system("pause");
	return 0;
}