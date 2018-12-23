/*
**	判断一个数是不是3的幂
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

/*---判断是不是3的幂---*/
int isPowerOfThree(int n)
{
	while (n > 1)
	{
		if (n % 3 != 0)
		{
			break;
		}
		n /= 3;
	}
	return n == 1;
}

int main()
{
	int num = 0;
	int flag = 0;
	printf("请输入一个非负整数: \n");
	scanf("%d", &num);
	flag = isPowerOfThree(num);
	if (flag == 1)
	{
		printf("%d是3的幂!\n", num);
	}
	else
	{
		printf("%d不是3的幂!\n", num);
	}
	system("pause");
	return 0;
}