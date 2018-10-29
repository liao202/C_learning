/*
** bite_c_1_2
** 2018_10_23
** 输出乘法口诀表
*/

#include "stdio.h"
#include "stdlib.h"

int main()
{
	int a = 0;
	int b = 0;
	for (a = 1; a < 10; a++)
	{
		for (b = 1; b <= a; b++)
		{
			printf("%d × %d = %2d  ", b, a, a*b);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
