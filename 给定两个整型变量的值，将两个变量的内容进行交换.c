/*
** 2018_10_27
*/

#include "stdio.h"
#include "stdlib.h"

int main()
{
	int a = 10;
	int b = 20;
	int temp = 0;
	printf("The original data: a = %d, b = %d\n", a, b);
	temp = a;
	a = b;
	b = temp;
	printf("The result of exchange: a = %d, b = %d\n", a, b);
	system("pause");
	return 0;
}
