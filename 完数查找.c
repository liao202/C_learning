/*
** ��������,�����������
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
		/*---�����ж�---*/
		if (sum == perfect_number)
		{
			printf("%-4d", perfect_number);
			/*---�������ӵĲ���---*/
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