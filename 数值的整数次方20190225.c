#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <math.h>

double myPower(double base, int exponent)
{
	assert(base != 0 || exponent != 0);
	if (base == 0 && exponent != 0)
	{
		return 0;
	}
	if (base != 0 && exponent == 0)
	{
		return 1;
	}
	if (exponent == 1 || base == 1)
	{
		return base;
	}
	int flag = 0;
	double ret = 1;
	if (exponent > 0)
	{
		flag = 1;
	}
	int i = 0;
	for (i = 0; i < fabs(exponent); ++i)
	{
		ret *= base;
	}
	if (flag == 1)
	{
		return ret;
	}
	return 1 / ret;
}

int main()
{
	double base = 0;
	int exponent = 0;
	double result = 0;
	printf("Please enter the base and exponent: \n");
	scanf("%lf %d", &base, &exponent);
	result = myPower(base, exponent);
	printf("The result is: %lf\n", result);
	system("pause");
	return 0;
}