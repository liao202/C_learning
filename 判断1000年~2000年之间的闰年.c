/*
** 2018_10_23
*/

#include "stdio.h"
#include "stdlib.h"

int main()
{
	int year = 0;
	for (year = 1000; year < 2001; year++)
	{
		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
			printf("%dÊÇÈòÄê\n",year);
	}
	system("pause");
	return 0;
}
