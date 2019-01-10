/*
**	递归算法求非负整数的每位之和
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

//每位之和
int addDigits(int n)
{
	if (n > 0)
	{
		return n % 10 + addDigits(n / 10);
	}
	return 0;
}

int main()
{
	int num = 0;
	int result = 0;
	printf("请输入非负整数: \n");
	scanf("%d", &num);
	result = addDigits(num);
	printf("结果为: %d\n", result);
	system("pause");
	return 0;
}