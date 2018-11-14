/*
**	一元二次方程的根求解
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"
#include "math.h"

/*---方法一---*/
int main()
{
	double a = 0;
	double b = 0;
	double c = 0;
	double disc = 0;
	double x1 = 0;
	double x2 = 0;
	double real_part = 0;
	double imag_part = 0;
	printf("please enter a, b and c:\n");
	scanf("%lf %lf %lf", &a, &b, &c);
	if (a == 0 && b == 0)
	{
		printf("The function has no root.\n");
	}
	else if (a == 0 && b != 0)
	{
		x1 = (-c) / b;
		printf("The function has only one root: x1 = x2 = %lf\n", x1);
	}
	else
	{
		disc = b * b - 4 * a * c;
		if (disc < 0)
		{
			real_part = -b / (2 * a);
			imag_part = sqrt(fabs(disc)) / (2 * a);
			printf("The function has two imaginary root x1 = %.3lf + %.3lfi, x2 = %.3lf - %.3lfi\n",
				real_part, imag_part, real_part, imag_part);
		}
		if (disc == 0)
		{
			x1 = (-b) / (2 * a);
			printf("The function has only two same roots: x1 = x2 = %.3lf\n", x1);
		}
		if (disc > 0)
		{
			x1 = ((-b) + sqrt(disc)) / (2 * a);
			x2 = ((-b) - sqrt(disc)) / (2 * a);
			printf("The function has two roots: x1 = %.3lf, x2 = %.3lf\n", x1, x2);
		}
	}
	system("pause");
	return 0;
}