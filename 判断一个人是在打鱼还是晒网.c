/*
** 某人从2000年1月1日开始三天打鱼两天晒网的循环，输入年月日，判断一个人是在打鱼还是筛网	
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

int leap = 0;

int check_year(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{	
		leap = 1;
		return 366;
	}
	return 365;
}

int check_month(int month)
{
	int sum = 0;
	switch (month)
	{
	case 1: sum = 0; break;
	case 2: sum = 31; break;
	case 3: sum = 59; break;
	case 4: sum = 90; break;
	case 5: sum = 120; break;
	case 6: sum = 151; break;
	case 7: sum = 181; break;
	case 8: sum = 212; break;
	case 9: sum = 243; break;
	case 10: sum = 273; break;
	case 11: sum = 304; break;
	case 12: sum = 334; break;
	default: printf("month is error!\n"); break;
	}
	return sum;
}

int main()
{
	int year = 0;
	int month = 0;
	int day = 0;
	int sum = 0;
	int flag = 0;
	printf("please input the year, month and day:\n");
	scanf("%d %d %d", &year, &month, &day);
	if (year < 2000)
	{
		printf("input error!\n");
	}
	else
	{
		for (int i = 2000; i < year; i++)
		{
			sum += check_year(i);
		}
		check_year(year);
		if (month > 2)
		{
			
			sum += leap;
		}
		sum += (check_month(month) + day);
	}
	/*---2000年1月1日为第一天，打印输入的年月日是第几天---*/
	printf("It is %dth day.\n", sum);
	flag = sum % 5;
	if (flag == 1 || flag == 2 || flag == 3)
	{
		printf("%d年%d月%d日在打鱼！\n", year, month, day);
	}
	if (flag == 4 || flag == 0)
	{
		printf("%d年%d月%d日在晒网！\n", year, month, day);
	}
	system("pause");
	return 0;
}