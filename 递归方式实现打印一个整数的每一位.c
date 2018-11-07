/*
** 2018_11_07
** 递归方式打印一个整数的每一位
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"
#include "math.h"

void print_bit(int n)
{
	if (fabs(n) > 9)
	{
		print_bit(n / 10);
	}
	printf("%d ", (int)fabs(n) % 10);
}

int main()
{
	int n = 0;
	printf("please input the number n: ");
	scanf("%d", &n);
	print_bit(n);
	system("pause");
	return 0;
}