#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int gcd(int num1, int num2)
{
	assert(num1 > 0);
	assert(num2 > 0);
	int i = 0;
	int result = 0;
	for (i = 1; i <= min(num1, num2); ++i)
	{
		if (num1 % i == 0 && num2 % i == 0)
		{
			result = i;
		}
	}
	return result;
}

int lcm(int num1, int num2)
{
	assert(num1 > 0);
	assert(num2 > 0);
	return num1 * num2 / gcd(num1, num2);
}

int main()
{
	int num1, num2;
	printf("Please input the num1 and num2: \n");
	scanf("%d %d", &num1, &num2);
	printf("The greatest common divisor is: %d\n", gcd(num1, num2));
	printf("The least common multi is: %d\n", lcm(num1, num2));
	system("pause");
	return 0;
}