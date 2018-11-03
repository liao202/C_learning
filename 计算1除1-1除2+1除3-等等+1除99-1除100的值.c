/*
** 2018_10_27
*/

#include "stdio.h"
#include "stdlib.h"

int main()
{
	double sum = 0;
	int de = 0;
	for (de = 1; de < 101; de++)
	{
		if (de % 2 == 0)
		{
			sum += (-1) * 1.0 / de;
		}
		else
		{
			sum += 1.0 / de;
		}
	}
	printf("The result is: %f\n", sum);
	system("pause");
	return 0;
}
