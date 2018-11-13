/*
** 小球落地问题
*/

#include "stdio.h"
#include "stdlib.h"

int main()
{
	/*---经过的米数---*/
	double sum = 100;
	/*---反弹的高度---*/
	double h = 100;
	/*---落地次数---*/
	int n = 0;
	for (n = 2; n < 10; ++n)
	{
		sum += h * 2;
		h /= 2;
	}
	printf("共经过%f米\n第10次落地时反弹的高度为%f\n", sum, h);
	system("pause");
	return 0;
}