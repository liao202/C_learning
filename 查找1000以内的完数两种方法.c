/*
**	��������
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"
#include "math.h"


/*---����һ---*/
int main()
{
	int root = 0;
	int index = 0;
	int sum = 0;
	int number = 2;
	printf("1000���ڵ���������: \n\n");
	while (number < 1000)
	{
		sum = 1;
		index = 2;
		root = (int)sqrt(number);
		do 
		{
			if (number % index == 0)
			{
				sum += index + number / index;
			}
			index++;
		} while (index <= root);
		/*---�����ж�---*/
		if (sum == number)
		{
			printf("%d ��������\n", number);
			printf("%d ����������: \n", number);
			/*---���Ӳ���---*/
			for (int i = 1; i < number; i++)
			{
				if (number % i == 0)
				{
					printf("%-5d", i);
				}
			}
			printf("\n\n");
		}
		number++;
	}
	system("pause");
	return 0;
}

/*---������---*/
int main()
{
	int number = 2;
	for (number = 2; number < 1000; number++)
	{
		int sum = 0;
		for (int i = 1; i < number; i++)
		{
			if (number % i == 0)
			{
				sum += i;
			}
		}
		if (number == sum)
		{
			printf("%d ������.\n", number);
			printf("%d ��������: ", number);
			for (int i = 1; i < number; i++)
			{
				if (number % i == 0)
				{
					printf("%-5d", i);
				}
			}
			printf("\n\n");
		}
	}
	system("pause");
	return 0;
}