/*
**	键盘上输入一个五位数，逆序组成一个新的五位数重新输出
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

int main()
{
	int number = 0;
	printf("请输入一个五位数: \n");
	while (1)
	{
		scanf("%d", &number);
		if (number >= 100000 || number < 10000)
		{
			printf("输入错误,请重新输入: \n");
			continue;
		}
		else
		{
			break;
		}
	}
	number = (number / 10000) + (number / 1000 % 10) * 10 +
		(number / 100 % 10) * 100 + (number / 10 % 10) * 1000 +
		(number % 10) * 10000;
	printf("The reverse number is: %d\n", number);
	system("pause");
	return 0;
}	