/*
**	菱形打印
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

void rhombus_print(int height)
{
	/*---打印上三角---*/
	for (int i = 1; i <= height / 2 + 1; i++)
	{
		for (int j = 1; j <= height / 2 - i + 1; j++)
		{
			printf(" ");
		}
		for (int j = 1; j <= 2 * i - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	/*---打印下三角---*/
	for (int i = height / 2; i >= 1; i--)
	{
		for (int j = 1; j <= height / 2 - i + 1; j++)
		{
			printf(" ");
		}
		for (int j = 1; j <= 2 * i - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}

int main()
{
	int rhombus_height = 0;
	printf("please input the height of the rhombus: \n");
	scanf("%d", &rhombus_height);
	rhombus_print(rhombus_height);
	system("pause");
	return 0;
}