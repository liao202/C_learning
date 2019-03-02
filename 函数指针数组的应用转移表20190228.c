#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int add(int a, int b)
{
	return a + b;
}

int sub(int a, int b)
{
	return a - b;
}

int mul(int a, int b)
{
	return a * b;
}

int div1(int a, int b)
{
	assert(b != 0);
	return a / b;
}

int main()
{
	typedef int(*Calc)(int, int);
	Calc calculator[4] = {
		add, sub, mul, div1
	};
	int choose = 0;
	int result = 0;
	printf("Please input your choose: \n");
	printf("----------------\n");
	printf("---  1. add  ---\n");
	printf("---  2. sub  ---\n");
	printf("---  3. mul  ---\n");
	printf("---  4. div  ---\n");
	printf("----------------\n");
	scanf("%d", &choose);
	result = calculator[choose - 1](4, 2);
	printf("The result is: %d\n", result);
	system("pause");
	return 0;
}