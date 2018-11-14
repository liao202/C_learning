/*
** ĳ�˴�2000��1��1�տ�ʼ�����������ɹ����ѭ�������������գ��ж�һ�������ڴ��㻹��ɸ��	
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
	/*---2000��1��1��Ϊ��һ�죬��ӡ������������ǵڼ���---*/
	printf("It is %dth day.\n", sum);
	flag = sum % 5;
	if (flag == 1 || flag == 2 || flag == 3)
	{
		printf("%d��%d��%d���ڴ��㣡\n", year, month, day);
	}
	if (flag == 4 || flag == 0)
	{
		printf("%d��%d��%d����ɹ����\n", year, month, day);
	}
	system("pause");
	return 0;
}