/*
**	判断一个数是不是4的幂
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

/*---判断一个数是不是4的幂---*/
int isPowerOfFour(int n)
{
	if (n == 1)
	{
		return 1;
	}
	while (n > 1)
	{
		if (n % 4 != 0)
		{
			break;
		}
		n /= 4;
	}
	return n == 1;
}

int main()
{
	int num = 0;
	int flag = 0;
	printf("请输入一个非负整数: \n");
	scanf("%d", &num);
	if (num <= 0)
	{
		printf("输入错误!\n");
		return 0;
	}
	flag = isPowerOfFour(num);
	if (flag == 1)
	{
		printf("%d是4的幂!\n", num);
	}
	else
	{
		printf("%d不是4的幂!\n", num);
	}
	system("pause");
	return 0;
}