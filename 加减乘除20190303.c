#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

struct Calc 
{
	int num1;
	char operator;
	int num2;
};

typedef struct Calc Calc;

int factorial(int n)
{
	if (n <= 0)
	{
		return 1;
	}
	return n * factorial(n - 1);
}

void calcNum(const Calc* c)
{
	if (c == NULL)
	{
		return;
	}
	if (c->operator == '+')
	{
		printf("%d + %d = %d\n",
			c->num1, c->num2, c->num1 + c->num2);
	}
	if (c->operator == '-')
	{
		printf("%d - %d = %d\n",
			c->num1, c->num2, c->num1 - c->num2);
		return;
	}
	if (c->operator == '*')
	{
		printf("%d * %d = %d\n",
			c->num1, c->num2, c->num1 * c->num2);
		return;
	}
	if (c->operator == '/')
	{
		if (c->num2 == 0)
		{
			printf("error!\n");
			return;
		}
		printf("%d / %d = %d\n",
			c->num1, c->num2, c->num1 / c->num2);
		return;
	}
	if (c->operator == '%')
	{
		if (c->num2 == 0)
		{
			printf("error!\n");
			return;
		}
		printf("%d % %d == %d\n", 
			c->num1, c->num2, c->num1 % c->num2);
		return;
	}
	if (c->operator == '!' && c->num2 == 0)
	{
		printf("%d! = %d\n", c->num1, factorial(c->num1));
		return;
	}
}

int main()
{
	Calc c;
	printf("Please input: \n");
	scanf("%d %c %d", 
		&c.num1, &c.operator, &c.num2);
	calcNum(&c);
	system("pause");
	return 0;
}