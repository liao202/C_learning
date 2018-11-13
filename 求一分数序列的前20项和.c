/*
** 求一分数序列的前20项和
** 2/1 + 3/2 + 5/3 + 8/5 +...
*/

#include "stdio.h"
#include "stdlib.h"

int main()
{
	double sum = 0;
	double num1 = 1;
	double num2 = 2;
	for (int i = 0; i < 20; ++i)
	{
		double temp = 0;
		sum += num2 / num1;
		temp = num2;
		num2 = num1 + num2;
		num1 = temp;
	}
	printf("%lf\n", sum);
	system("pause");
	return 0;
}