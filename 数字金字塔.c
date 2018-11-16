/*
**	数字金字塔
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

/*---方法一---*/
void pyramid_number(int line)
{
	for (int i = 1; i <= line; i++)
	{
		for (int j = 1; j <= 3 * (line - i); j++)
		{
			printf(" ");
		}
		for (int j = 1; j <= i; j++)
		{
			printf("%-3d", j);
		}
		for (int j = i - 1; j >= 1; j--)
		{
			printf("%-3d", j);
		}
		printf("\n\n");
	}
}

/*---方法二---*/
void pyramid_number(int line)
{
	for (int i = 1; i <= line; i++)
	{
		for (int j = 1; j <= 3 * (line - i); j++)
		{
			printf(" ");
		}
		for (int j = 1; j <= 2 * i - 1; j++)
		{
			printf("%-3d", i - abs(i - j));
		}
		printf("\n\n");
	}
}

int main()
{
	int line = 0;
	printf("please input the line of pyramid number: \n");
	scanf("%d", &line);
	pyramid_number(line);
	system("pause");
	return 0;
}