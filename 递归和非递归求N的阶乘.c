/*
** 2018_11_07
** 递归和非递归方法求N的阶乘
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

/*---方法一非递归法求N的阶乘---*/
int factor(int n)
{
	int result = 1;
	if (n == 0)
	{
		return 1;
	}
	if (n < 0)
	{
		return -1;
	}
	for (; n > 0; n--)
	{
		result *= n;
	}
	return result;
}

int main()
{
	int n = 0;
	printf("please input the number n:");
	scanf("%d", &n);
	printf("The %d's factorial is %d.\n", n, factor(n));
	system("pause");
	return 0;
}

/*---方法二递归法---*/
int factor(int n)
{
	if (n == 0)
	{
		return -1;
	}
	if (n == 1 || n == 0)
	{
		return 1;
	}
	return n * factor(n - 1);
}
int main()
{
	int	n;
	printf("Please input the number n:");
	scanf("%d", &n);
	printf("The %d's factorial is: %d.\n", n, factor(n));
	system("pause");
	return 0;
}