/*
**	M����������֮��ΪN��N����������֮��ΪM����MNΪһ��������
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

int main()
{
	int number1 = 0;
	/*---500���ڵ��������ԵĲ���---*/
	for (number1 = 2; number1 <= 500; number1++)
	{
		int number2 = 0;
		int sum = 0;
		for (int i = 1; i < number1; i++)
		{
			if (number1 % i == 0)
			{
				number2 += i;
			}
		}
		for (int i = 1; i < number2; i++)
		{
			if (number2 % i == 0)
			{
				sum += i;
			}
		}
		/*---number1 > number2 ��֤һ��������ֻ���һ��---*/
		if (number1 == sum && number1 != number2 && number1 < number2)
		{
			printf("%-3d �� %-3d ��һ��������.\n", number1, number2);
		}
	}
	system("pause");
	return 0;
}