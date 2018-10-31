/*
** bite_c_4_1
** 2018_10_31
** 输出高度为13的菱形图案
*/

#include "stdio.h"
#include "stdlib.h"

int main()
{
	int i = 0;
	int j = 0;
	int rhombus_height = 13;
	printf("菱形图案如下: \n");
	// 打印上三角
	for (i = 1; i <= rhombus_height / 2 + 1; i++)
	{
		for (j = 1; j <= rhombus_height / 2 + i; j++)
		{
			if (j >= rhombus_height / 2 - i + 2)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	// 打印下三角
	for (i = rhombus_height / 2; i >= 1; i--)
	{
		for (j = 1; j <= rhombus_height / 2 + i; j++)
		{
			if (j >= rhombus_height / 2 - i + 2)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	system("pause");
	return 0;
}