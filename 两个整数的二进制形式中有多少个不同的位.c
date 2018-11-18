/*
**	两个整型数据的二进制形式中有多少个不同的位
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

int bit_different(int number_a, int number_b)
{
	int count = 0;
	for (int i = 0; i < 32; ++i)
	{
		if (number_a % 2 != number_b % 2)
		{
			++count;
		}
		number_a /= 2;
		number_b /= 2;
	}
	return count;
}

int main()
{
	int number_a = 0;
	int number_b = 0;
	int count = 0;
	printf("请输入数字a和数字b: \n");
	scanf("%d %d", &number_a, &number_b);
	count = bit_different(number_a, number_b);
	printf("%d和%d的二进制形式中有%d个不同的位\n", number_a, number_b, count);
	system("pause");
	return 0;
}