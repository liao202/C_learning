/*
** 2018_11_03
** C����
** ���ú����ж�ĳһ���ǲ�������
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

void year_is_leap(int year)
{
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
	{
		printf("%d������.\n", year);
	}
	else
	{
		printf("%d��������.\n", year);
	}
}

int main()
{
	int year = 0;
	printf("���������: \n");
	while (1)
	{
		scanf("%d", &year);
		if (year <= 0)
		{
			printf("��������������������: \n");
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