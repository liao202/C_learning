/*
**	统计一个数的二进制形式中1的个数
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

/*---方法一---*/
int countOneBits(int value)
{
	int count = 0;
	while (value != 0)
	{
		if (value % 2 == 1)
		{
			++count;
		}
		value /= 2;
	}
	return count;
}

/*---方法二---*/
int countOneBits(int value)
{
	int count = 0;
	while (value != 0)
	{
		value = value & (value - 1);
		++count;
	}
	return count;
}

/*---方法三---*/
int countOneBits(int value)
{
	int count = 0;
	for (int i = 0; i < 32; ++i)
	{
		if (((value >> i) & 1) == 1)
		{
			++count;
		}
	}
	return count;
}

/*---方法四---*/
int countOneBits(int value)
{
	int count = 0;
	for (int i = 0; i < 32; ++i)
	{
		if (value & (1 << i))
		{
			++count;
		}
	}
	return count;
}

int main()
{
	int count = 0;
	int value = 0;
	printf("请输入数字value的值: \n");
	scanf("%d", &value);
	count = countOneBits(value);
	printf("%d中有%d个1!\n", value, count);
	system("pause");
	return 0;
}