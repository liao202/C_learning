/*
**	����һ����λ���ж����ǲ���ˮ�ɻ���
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

int water_flower_number_check(int number)
{
	int i = number / 100;
	int j = number / 10 % 10;
	int k = number % 10;
	if (number == i * i * i + j * j * j + k * k * k)
	{
		return 1;
	}
	return 0;
}

int main()
{
	int number = 0;
	int flag = 0;
	printf("������һ����λ��:\n");
	while (1)
	{
		scanf("%d", &number);
		if (number >= 1000 || number <= 100)
		{
			printf("�������, ����������: \n");
			continue;
		}
		else
		{
			break;
		}
	}
	flag = water_flower_number_check(number);
	if (flag)
	{
		printf("%d is water flower number.\n", number);
	}
	else
	{
		printf("%d is not water flower number.\n", number);
	}
	system("pause");
	return 0;
}