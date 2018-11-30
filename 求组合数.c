/*
**	求组合数n! / (m! * (n - m)!)
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

/*---n的阶乘---*/
int factorial(int n)
{
	if (n < 0)
	{
		return -1;
	}
	if (n == 0 || n == 1)
	{
		return 1;
	}
	return n * factorial(n - 1);
}

int main()
{
	int m = 0;
	int n = 0;
	double result = 0;
	printf("请输入数字m和n: \n");
	scanf("%d %d", &m, &n);
	result = (double)factorial(n) /
		(factorial(m) * factorial(n - m));
	printf("n! / (m! * (n - m)!)结果为: %f\n",
		result);
	system("pause");
	return 0;
}