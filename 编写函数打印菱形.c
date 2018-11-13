/*
** 编写函数打印菱形
*/

#include "stdio.h"
#include "stdlib.h"

/*---打印菱形---*/
print_rhombus(int height)
{
	/*---上三角打印---*/
	for (int i = 1; i <= height / 2 + 1; ++i)
	{
		for (int j = 1; j <= height / 2 + i; ++j)
		{
			if (j >= height / 2 - i + 2)
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
	/*---打印下三角---*/
	for (int i = height / 2; i >= 1; --i)
	{
		for (int j = 1; j <= height / 2 + i; ++j)
		{
			if (j >= height / 2 - i + 2)
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
}

int main()
{
	print_rhombus(20);
	system("pause");
	return 0;
}