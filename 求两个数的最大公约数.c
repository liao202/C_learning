/*
** 2018_10_27
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

int main()
{
	int d1 = 0;
	int d2 = 0;
	int i = 0;
	printf("Please input two numbers: ");
	scanf("%d %d", &d1, &d2);
	for (i = d1; i >= 1; i--)
	{
		if (d1 % i == 0 && d2 % i == 0)
		{
			break;
		}
	}
	printf("The greatest common divisor is: %d\n", i);
	system("pause");
	return 0;
}
