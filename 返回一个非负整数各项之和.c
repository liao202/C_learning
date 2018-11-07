/*
** 2018_11_07
** 函数实现输入一个非负整数，返回组成它的数字之和
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

int digitsum(int number)
{
	static int sum = 0;
	if (number < 0)
	{
		return -1;
	}
	if (number > 9)
	{
		digitsum(number / 10);
	}
	return sum += number % 10;
}

int main()
{
	int number = 0;
	printf("please input the number: ");
	scanf("%d", &number);
	printf("The result is: %d.\n", digitsum(number));
	system("pause");
	return 0;
}