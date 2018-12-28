/*
**	小于一个整数的所有整数中质数的个数	
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

/*---质数的判断---*/
int isPrime(int n)
{
	for (int i = 2; i < n; ++i)
	{
		if (n % i == 0)
		{
			return 0;
		}
	}
	return 1;
}

/*---质数个数统计---*/
int primesCount(int n)
{
	int count = 0;
	int flag = 0;
	for (int i = 2; i < n; ++i)
	{
		flag = isPrime(i);
		if (flag == 1)
		{
			++count;
		}
	}
	return count;
}

int main()
{
	int num = 0;
	int count = 0;
	printf("请输入一个非负数: \n");
	scanf("%d", &num);
	count = primesCount(num);
	printf("小于%d的有%d个质数!\n", num, count);
	system("pause");
	return 0;
}