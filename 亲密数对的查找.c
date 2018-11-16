/*
**	M的所有因子之和为N，N的所有因子之和为M，称MN为一对亲密数
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

int main()
{
	int number1 = 0;
	/*---500以内的亲密数对的查找---*/
	for (number1 = 2; number1 <= 500; number1++)
	{
		int number2 = 0;
		int sum = 0;
		for (int i = 1; i < number1; i++)
		{
			if (number1 % i == 0)
			{
				number2 += i;
			}
		}
		for (int i = 1; i < number2; i++)
		{
			if (number2 % i == 0)
			{
				sum += i;
			}
		}
		/*---number1 > number2 保证一对亲密数只输出一次---*/
		if (number1 == sum && number1 != number2 && number1 < number2)
		{
			printf("%-3d 和 %-3d 是一对亲密数.\n", number1, number2);
		}
	}
	system("pause");
	return 0;
}