#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

struct Date 
{
	int year;
	int month;
	int day;
};

typedef struct Date Date;

int month[13][2] = {
		{ 0, 0 }, { 31, 31 }, { 28, 29 }, { 31, 31 }, {30, 30},
		{ 31, 31 }, { 30, 30 }, { 31, 31 }, {31, 31},
		{ 30, 30 }, { 31, 31 }, { 30, 30 }, {31, 31}
};

int isLeapYear(int year)
{
	if (year % 400 == 0 || year % 4 == 0 && year % 100 != 0)
	{
		return 1;
	}
	return 0;
}

void dateInit(Date* d)
{
	if (d == NULL)
	{
		return;
	}
	printf("Please input the date: \n");
	scanf("%d %d %d", &d->year, &d->month, &d->day);
}

void dateDisplay(Date* d)
{
	if (d == NULL)
	{
		return;
	}
	printf("The date is: %d-%02d-%02d\n",
		d->year, d->month, d->day);
}

int theNoDay(Date* d)
{
	int flag = isLeapYear(d->year);
	int i = 0;
	int ret = 0;
	for (i = 1; i < d->month; ++i)
	{
		ret += month[i][flag];
	}
	ret += d->day;
	return ret;
}

int main()
{
	Date d;
	dateInit(&d);
	dateDisplay(&d);
	printf("The date is the No.%d days in %d year!\n",
		theNoDay(&d), d.year);
	system("pause");
	return 0;
}