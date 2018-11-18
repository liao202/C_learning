/*
**	编写函数统计输入参数的二进制形式中1的个数,并返回个数
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

/*---方法一---*/
int bit_one_count(int number)
{
	int count = 0;
	for (int i = 0; i < 32; ++i)
	{
		if (number & (1 << i))
		{
			++count;
		}
	}
	return count;
}

int main()
{
	int number = 0;
	int bit_one = 0;
	printf("please input the number: \n");
	scanf("%d", &number);
	bit_one = bit_one_count(number);
	printf("%d中1的个数为%d个!\n", number, bit_one);
	system("pause");
	return 0;
}

/*---方法二---*/
int bit_one_count(unsigned int number)
{
	int count = 0;
	while (number)
	{
		if (number % 2 == 1)
		{
			++count;
		}
		number /= 2;
	}
	return count;
}

int main()
{
	unsigned int number = 0;
	int count = 0;
	printf("please input unsigned number: \n");
	scanf("%d", &number);
	count = bit_one_count(number);
	printf("%d中有%d个1\n", number, count);
	system("pause");
	return 0;
}