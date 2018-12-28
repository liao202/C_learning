/*
**	数学法求一个非负整数的每位和直到结果为一位数
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

//求一个非负整数的每位和
int addDigits(int n)
{
	return 1 + (n - 1) % 9;
}

int main()
{
	int num = 0;
	printf("请输入一个非负整数: \n");
	scanf("%d", &num);
	printf("结果为: %d\n", addDigits(num));
	system("pause");
	return 0;
}