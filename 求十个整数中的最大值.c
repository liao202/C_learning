/*
** 2018_10_27
*/

#include "stdio.h"
#include "stdlib.h"

int main()
{
	int a[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int i = 0;
	int max = 0;
	for (i = 0; i < 10; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
		}
	}
	printf("The 10 numbers are: ");
	for (i = 0; i < 10; i++)
	{
		printf("%2d", a[i]);
	}
	printf("\nThe max of 10 numbers is: %d\n", max);
	system("pause");
	return 0;
}
