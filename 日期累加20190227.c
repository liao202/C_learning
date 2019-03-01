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
		{ 0, 0 }, { 31, 31 }, { 28, 29 }, { 31, 31 }, { 30, 30 },
		{ 31, 31 }, { 30, 30 }, { 31, 31 }, { 31, 31 },
		{ 30, 30 }, { 31, 31 }, { 30, 30 }, { 31, 31 }
};

void dateInit(Date* d)
{
	printf("Please input the date: \n");
	scanf("%d %d %d", &d->year, &d->month, &d->day);
}

void dateDisplay(Date* d)
{
	printf("The date is: %d-%02d-%02d\n",
		d->year, d->month, d->day);
}

int isLeapYear(int year)
{
	if (year % 400 == 0 || year % 4 == 0 && year % 100 != 0)
	{
		return 1;
	}
	return 0;
}

void dateAdd(Date* d, int days)
{
	int flag = isLeapYear(d->year);
	while (days)
	{
		if (d->day == month[d->month][flag])
		{
			if (days > 0)
			{
				++d->month;
				d->day = 1;
				--days;
			}
		}
		else
		{
			--days;
			++d->day;
		}
		if (d->month == 13)
		{
			++d->year;
			flag = isLeapYear(d->year);
			d->month = 1;
		}
	}
}

int main()
{
	Date d;
	int days = 0;
	dateInit(&d);
	dateDisplay(&d);
	printf("Please input the add days: \n");
	scanf("%d", &days);
	dateAdd(&d, days);
	dateDisplay(&d);
	system("pause");
	return 0;
}