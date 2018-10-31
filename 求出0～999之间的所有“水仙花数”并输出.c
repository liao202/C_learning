/*
** bite_c_4_2
** 2018_10_31
** 求出0～999之间的所有“水仙花数”并输出
*/

#include "stdio.h"
#include "stdlib.h"
#include "math.h"

int main()
{
	int i = 0;
	int units = 0;
	int tens = 0;
	int hundreds_digit = 0;
	int flag = 0;
	printf("水仙花数如下: \n");
	for (i = 0; i < 1000; i++)
	{
		if (i < 100)
		{
			continue;
		}
		hundreds_digit = i / 100;
		tens = i / 10 % 10;
		units = i % 10;
		flag = pow(hundreds_digit, 3) + pow(tens, 3) + pow(units, 3);
		if (i != flag)
		{
			continue;
		}
		printf("%d\n", i);
	}
	system("pause");
	return 0;
}