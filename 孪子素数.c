/*
**	连续输出相邻的15对孪生素数
**	孪生素数,相差为2的一对素数
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"
#include "math.h"

int check_prime(int number)
{
	for (int i = 2; i < sqrt(number); i++)
	{
		if (number % i == 0)
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	int i = 0;
	int number = 2;
	printf("The fifteen pairs of prime is below: \n");
	while (i < 15)
	{
		if (check_prime(number) && check_prime(number + 2))
		{
			i++;
			printf("Twins of prime: %d %d\n", number, number + 2);
		}
		number++;
	}
	system("pause");
	return 0;
}