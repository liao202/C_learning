/*
** 最大公约数和最小公倍数
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

/*---最大公约数---*/
int greatest_commom_divisor(int num1, int num2)
{
	int gcd = 0;
	for (int i = 1; i <= min(num1, num2); ++i)
	{
		if (num1 % i == 0 && num2 % i == 0)
		{
			gcd = i;
		}
	}
	return gcd;
}

/*---最小公倍数---*/
int least_common_multiple(int num1, int num2)
{
	int lcm = num1 * num2 / greatest_commom_divisor(num1, num2);
	return lcm;
}

int main()
{
	int num1 = 0;
	int num2 = 0;
	int gcd = 0;
	int lcm = 0;
	printf("please enter the number num1 and num2: ");
	scanf("%d %d", &num1, &num2);
	gcd = greatest_commom_divisor(num1, num2);
	lcm = least_common_multiple(num1, num2);
	printf("The number num1: %d and num2: %d\nThe greatest common divisior is: %d\nThe least commom multiple is: %d\n",
		num1, num2, gcd, lcm);
	system("pause");
	return 0;
}