/*
**	���Լ������С������	
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

/*---����һ---*/
/*---���Լ��---*/
int greatest_common_divisor(int number1, int number2)
{
	int gcd = 0;
	for (int i = 1; i <= min(number1, number2); i++)
	{
		if (number1 % i == 0 && number2 % i == 0)
		{
			gcd = i;
		}
	}
	return gcd;
}

/*---��С������---*/
int least_common_multiple(int number1, int number2)
{
	int lcm = 0;
	lcm = (number1 * number2) / greatest_common_divisor(number1, number2);
	return lcm;
}

/*---������---*/
/*---���Լ��---*/
int greatest_common_divisor(int number1, int number2)
{
	int temp = 0;
	/*---ȷ��number1��number2��---*/
	if (number1 < number2)
	{
		temp = number1;
		number1 = number2;
		number2 = temp;
	}
	/*---����һ:����number1---*/
	while (number2 != 0)
	{
		temp = number1 % number2;
		number1 = number2;
		number2 = temp;
	}
	return number1;
	/*---������:����number2---*/
	while (number1 % number2 != 0)
	{
		temp = number1 % number2;
		number1 = number2;
		number2 = temp;
	}
	return number2;
}

/*---��С������---*/
int least_common_multiple(int number1, int number2)
{
	return (number1 * number2) / greatest_common_divisor(number1, number2);
}

int main()
{
	int number1 = 0;
	int number2 = 0;
	/*---���Լ��---*/
	int gcd = 0;
	/*---��С������---*/
	int lcm = 0;
	printf("please input the two numbers: \n");
	scanf("%d %d", &number1, &number2);
	gcd = greatest_common_divisor(number1, number2);
	lcm = least_common_multiple(number1, number2);
	printf("The %d and %d\nthe greatest common divisor: %d\nthe least common multiple: %d\n",
		number1, number2, gcd, lcm);
	system("pause");
	return 0;
}