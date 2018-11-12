/*
** 完数查找,并输出其因子
*/

#include "stdio.h"
#include "stdlib.h"

int main()
{
	for (int perfect_number = 1; perfect_number < 1000; ++perfect_number)
	{
		int sum = 0;
		for (int index = 1; index < perfect_number; ++index)
		{
			if (perfect_number % index == 0)
			{
				sum += index;
			}
		}
		/*---完数判断---*/
		if (sum == perfect_number)
		{
			printf("%-4d", perfect_number);
			/*---完数因子的查找---*/
			for (int index = 1; index <= perfect_number / 2; ++index)
			{
				if (perfect_number % index == 0)
				{
					printf("%4d", index);
				}
			}
			printf("\n");
		}
	}
	system("pause");
	return 0;
}