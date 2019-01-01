/*
**	将一个非负整数的每一位相加
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

//每位相加
int addDigits(int n)
{
	int ret = 0;
	while (n != 0)
	{
		ret += n % 10;
		n /= 10;
	}
	return ret;
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