/*
** 2018_11_03
** C语言
** 调用函数打印乘法口诀表，打印的行数可控
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

void mutiplication_table_print(int row)
{
	int i = 0;
	int j = 0;
	for (i = 1; i <= row; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%2d×%2d =%2d  ", j, i, j * i);
		}
		printf("\n");
	}
}

int main()
{
	int row = 0;
	printf("请输入要打印的乘法口诀表的行数: ");
	scanf("%d", &row);
	printf("乘法口诀表如下: \n");
	mutiplication_table_print(row);
	system("pause");
	return 0;
}