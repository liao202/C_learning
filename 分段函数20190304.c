#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

double func(double x)
{
	if (x >= 0 && x < 2)
	{
		return -x + 2.5;
	}
	if (x >= 2 && x < 4)
	{
		return 2 - 1.5 * (x - 3) * (x - 3);
	}
	if (x >= 4 && x < 6)
	{
		return x / 2 - 1.5;
	}
	return -999999.99;
}

int main()
{
	double x = 0;
	printf("Please input x: \n");
	scanf("%lf", &x);
	printf("f(%.2f) = %.2f\n", x, func(x));
	system("pause");
	return 0;
}