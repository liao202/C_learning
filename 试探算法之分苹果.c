/*
**	试探算法之五人分苹果
**	第一个人将苹果均分为5份,并将多余的一个吃掉,拿走其中一份.
**	第二个人将剩下的均分为5份,并将多余的一个吃掉,拿走其中一份.
**	依次...
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

int main()
{
	int try_flag = 1;
	int try_number = 6;
	int total_number = 0;
	int person_a = 0;
	int person_b = 0;
	int person_c = 0;
	int person_d = 0;
	int person_e = 0;
	while (try_flag)
	{
		total_number = try_number;
		try_flag = 0;
		for (int i = 1; i <= 5; i++)
		{
			if ((try_number - 1) % 5 == 0)
			{
				try_number = try_number - 1 - (try_number - 1) / 5;
			}
			else
			{
				try_flag = 1;
			}
		}
		try_number = total_number + 1;
	}
	printf("The total apples are: %d.\n", total_number);
	person_a = (total_number - 1) / 5;
	person_b = (total_number - person_a - 2) / 5;
	person_c = (total_number - person_a - person_b - 3) / 5;
	person_d = (total_number - person_a - person_b - person_c - 4) / 5;
	person_e = (total_number - person_a - person_b - person_c - person_d - 5) / 5;
	printf("The people a have %d apples.\n", person_a);
	printf("The people b have %d apples.\n", person_b);
	printf("The people c have %d apples.\n", person_c);
	printf("The people d have %d apples.\n", person_d);
	printf("The people e have %d apples.\n", person_e);
	system("pause");
	return 0;
}