/*
**	求N的阶乘
**	递归调用方法
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

int factorial(int number)
{
	if (number == 1 || number == 0)
	{
		return 1;
	}
	return number * factorial(number - 1);
}

int main()
{
	int number = 0;
	int result = 0;
	printf("please input the number: \n");
	scanf("%d", &number);
	result = factorial(number);
	printf("The result of factor number: %d\n", result);
	system("pause");
	return 0;
}