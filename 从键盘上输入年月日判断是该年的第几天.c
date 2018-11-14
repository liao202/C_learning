/*
** 从键盘上输入年月日，判断是该年的第几天	
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

int check_leap(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		return 1;
	}
	return 0;
}
/*---方法一---*/
int main()
{
	int year = 0;
	int month = 0;
	int day = 0;
	int flag = 0;
	int sum = 0;
	printf("please enter year, month and day: \n");
	scanf("%d %d %d", &year, &month, &day);
	flag = check_leap(year);
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
	sum += day;
	if (month > 2)
	{
		sum += flag;
	}
	printf("It is the %dth day.\n", sum);
	system("pause");
	return 0;
}

/*---方法二---*/
int main()
{
	int month_array[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int year = 0;
	int month = 0;
	int day = 0;
	int sum = 0;
	printf("please input year, month and day:\n");
	scanf("%d %d %d", &year, &month, &day);
	for (int i = 0; i < month - 1; i++)
	{
		sum += month_array[i];
	}
	if (month > 2)
	{
		sum += check_leap(year);
	}
	sum += day;
	printf("It is %dth day.\n", sum);
	system("pause");
	return 0;
}