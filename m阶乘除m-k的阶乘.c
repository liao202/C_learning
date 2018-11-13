/*
** 计算k! / (m - k)!
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"
#include "math.h"

/*---阶乘计算---*/
double factorial(double num)
{
	if (num <= 1)
	{
		return 1;
	}
	return num * factorial(num - 1);
}

/*---公式计算---*/
double calculate(double m, double k)
{
	return factorial(k) / factorial(m - k);
}

int main()
{
	double m = 0;
	double k = 0;
	scanf("%lf %lf", &m, &k);
	double result = 0;
	result = calculate(m, k);
	printf("%lf\n", result);
	system("pause");
	return 0;
}