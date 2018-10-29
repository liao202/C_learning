/*
** 2018_10_27
*/

#include "stdio.h"
#include "stdlib.h"

//方法一
int main()
{
	int a = 10;
	int b = 20;
	printf("The original data: a = %d, b = %d\n", a, b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("The result of exchange: a = %d, b = %d\n", a, b);
	system("pause");
	return 0;
}

//方法二
int main()
{
	int a = 10;
	int b = 20;
	printf("The original data: a = %d, b = %d\n", a, b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("The result of exchange: a = %d, b = %d\n", a, b);
	system("pause");
	return 0;
}
