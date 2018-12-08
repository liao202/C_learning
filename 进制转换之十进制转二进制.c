/*
**	进制转换
**	十进制转二进制
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

#define N 5

/*---整数的十进制转二进制---*/
void decimalToBinaryI(int n)
{
	if (n / 2 != 0)
	{
		decimalToBinaryI(n / 2);
	}
	printf("%d", n % 2);
}

/*---小数的十进制转二进制---*/
void decimalToBinaryD(double x, int n)
{
	int i = 1;
	double y = 0;
	while (i++ < n)
	{
		y = x * 2;
		printf("%d", (int)y);
		x = y - (int)y;
	}
}

int main()
{
	double number = 0;
	int n = 0;
	printf("请输入十进制数: \n");
	scanf("%lf", &number);
	printf("请输入要转换的小数的二进制形式位数: \n");
	scanf("%d", &n);
	printf("%.4f的二进制形式如下: \n", number);
	decimalToBinaryI((int)number);
	printf(".");
	decimalToBinaryD(number - (int)number, n);
	printf("\n");
	system("pause");
	return 0;
}