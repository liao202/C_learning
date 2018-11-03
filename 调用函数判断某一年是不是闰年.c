/*
** 2018_11_03
** C语言
** 调用函数判断某一年是不是闰年
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

void year_is_leap(int year)
{
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
	{
		printf("%d是闰年.\n", year);
	}
	else
	{
		printf("%d不是闰年.\n", year);
	}
}

int main()
{
	int year = 0;
	printf("请输入年份: \n");
	while (1)
	{
		scanf("%d", &year);
		if (year <= 0)
		{
			printf("年份输入错误，请重新输入: \n");
		}
		else
		{
			break;
		}
	}
	year_is_leap(year);
	system("pause");
	return 0;
}