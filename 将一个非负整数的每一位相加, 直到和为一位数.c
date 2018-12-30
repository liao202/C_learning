/*
**	将一个非负整数的每一位相加, 直到结果为一位数
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

//各个位相加
int addDigits(int n)
{
	if (n > 0)
	{
		return n % 10 + addDigits(n / 10);
	}
	return 0;
}

//判断每一位的和结果是否为一位数
int isUnit(int n)
{
	while (n > 10)
	{
		n = addDigits(n);
	}
	return n;
}

int main()
{
	int num = 0;
	int result = 0;
	printf("请输入一个非负整数: \n");
	scanf("%d", &num);
	result = isUnit(num);
	printf("结果为: %d\n", result);
	system("pause");
	return 0;
}