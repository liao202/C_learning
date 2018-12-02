/*
**	求一个特大的数的阶乘, 数组实现
**	求n的阶乘, 就是将(n - 1)!累加n - 1次
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

#define LEN 1000

int factorial[LEN];
int temp[LEN];
/*---结果的位数---*/
int result_bit_amount;

/*---已知a[]中的(k - 1)!, 求出k!存于a[]---*/
void factorialNext(int number)
{
	int temp_variable = 0;
	/*---将要累加的数据预存起来---*/
	for (int i = 0; i < result_bit_amount; ++i)
	{
		temp[i] = factorial[i];
	}
	factorial[result_bit_amount] = 0;
	/*---通过累加求number!---*/
	for (int m = 1; m < number; ++m)
	{
		for (int i = 0; i < result_bit_amount; ++i)
		{
			temp_variable = factorial[i] + temp[i];
			/*---进位---*/
			factorial[i] = temp_variable % 10;
			factorial[i + 1] += temp_variable / 10;
		}
	}
	/*---处理最高进位---*/
	temp_variable = factorial[result_bit_amount];
	while (temp_variable > 0)
	{
		factorial[result_bit_amount++] = temp_variable % 10;
		temp_variable /= 10;
	}
}

/*---输出factorial[result_bit_amount]中存放的number!---*/
void factorialResultDisplay(int *factorial, int number)
{
	printf("%4d != ", number);
	for (int i = result_bit_amount - 1; i >= 0; --i)
	{
		printf("%d", factorial[i]);
	}
	printf("\n\n");
}

int main()
{
	int number = 0;
	printf("请输入数字n: \n");
	scanf("%d", &number);
	factorial[0] = 1;
	result_bit_amount = 1;
	factorialResultDisplay(factorial, 1);
	/*---依次输出2!到number!---*/
	for (int i = 2; i <= number; ++i)
	{
		factorialNext(i);
		factorialResultDisplay(factorial, i);
	}
	system("pause");
	return 0;
}