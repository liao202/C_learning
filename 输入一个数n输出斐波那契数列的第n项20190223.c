#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int fabonacciNumber(int num)
{
	if (num <= 0)
	{
		return -1;
	}
	if (num == 1 || num == 2)
	{
		return 1;
	}
	int n_1 = 1;
	int n_2 = 1;
	int n_n = 0;
	int i = 0;
	for (i = 3; i <= num; ++i)
	{
		n_n = n_1 + n_2;
		n_2 = n_1;
		n_1 = n_n;
	}
	return n_n;
}

int main()
{
	int num = 0;
	int result = 0;
	printf("请输入一个正整数: \n");
	scanf("%d", &num);
	result = fabonacciNumber(num);
	printf("The %dth fabonacci number is: %d\n",
		num, result);
	system("pause");
	return 0;
}