/*
** 2018_10_27
*/

#include "stdio.h"
#include "stdlib.h"

int main()
{
	int i = 0;
	int sum = 0;
	for (i = 1; i < 101; i++)
	{
		if (i % 10 == 9)
		{
			sum++;
		}
		if (i / 10 == 9)
		{
			sum++;
		}
	}
	printf("The occurence of 9 is: %d\n", sum);
	system("pause");
	return 0;
}
