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

void dateInit(Date* d)
{
	printf("Please enter the year: \n");
	scanf("%d", &d->year);
	printf("Please enter the month: \n");
	scanf("%d", &d->month);
	printf("Please enter the day: \n");
	scanf("%d", &d->day);
}

void dateDisplay(Date* d)
{
	printf("The date is: %d-%d-%d\n",
		d->year, d->month, d->day);
}

int isLeapYear(int year)
{
	if (year % 400 == 0 || year % 100 != 0 && year % 4 == 0)
	{
		return 1;
	}
	return 0;
}

void theNoDay(Date* d)
{
	int num = 0;
	int flag = isLeapYear(d->year);
	switch (d->month)
	{
	case 1: num = 0; break;
	case 2: num = 31; break;
	case 3: num = 59; break;
	case 4: num = 90; break;
	case 5: num = 120; break;
	case 6: num = 151; break;
	case 7: num = 181; break;
	case 8: num = 212; break;
	case 9: num = 243; break;
	case 10: num = 273; break;
	case 11: num = 304; break;
	case 12: num = 334; break;
	}
	num += d->day;
	if (flag == 1 && d->month > 2)
	{
		num += 1;
	}
	printf("Date: %d-%d-%d is the No.%d days!\n",
		d->year, d->month, d->day, num);
}

int main()
{
	Date d1;
	dateInit(&d1);
	dateDisplay(&d1);
	theNoDay(&d1);
	system("pause");
	return 0;
}