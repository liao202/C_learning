/*
**	判断一个数是不是完数
**	完数: 一个数的因子之和恰好等于它本身
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

/*---完数判断---*/
int isPerfectNumber(int n)
{
	int sum = 0;
	/*---统计n的因子和---*/
	for (int i = 1; i <= n / 2; ++i)
	{
		if (n % i == 0)
		{
			sum += i;
		}
	}
	/*---判断因子和是否等于其自身---*/
	if (sum == n)
	{
		return 1;
	}
	return 0;
}

int main()
{
	int number = 0; 
	int perfect_number_flag = 0;
	printf("请输入一个整数: \n");
	scanf("%d", &number);
	perfect_number_flag = isPerfectNumber(number);
	if (perfect_number_flag == 1)
	{
		printf("%d是完数!\n", number);
	}
	else
	{
		printf("%d不是完数!\n", number);
	}
	system("pause");
	return 0;
}