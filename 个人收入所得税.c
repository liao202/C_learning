/*
**	个人收入所得税的计算
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

/*---方法一---*/
int main()
{
	double earning = 0;
	double tax = 0;
	int index = 0;
	scanf("%lf", &earning);
	if (earning > 5000)
	{
		index = 5;
	}
	else
	{
		index = (int)(earning / 1000);
	}
	switch (index)
	{
	case 0:
	case 1: tax = 0; break;
	case 2: tax = 0.05 * (earning - 2000); break;
	case 3: tax = 50 + 0.1 * (earning - 3000); break;
	case 4: tax = 150 + 0.15 * (earning - 4000); break;
	case 5: tax = 300 + 0.2 * (earning - 5000); break;
	default: break;
	}
	printf("The tax is: %.4lf\n", tax);
	system("pause");
	return 0;
}

/*---方法二---*/
int main()
{
	double tax = 0;
	double earning = 0;
	printf("please input your earning:\n");
	scanf("%lf", &earning);
	if (earning < 2000)
	{
		tax = 0;
	}
	else if (earning < 3000)
	{
		tax = 0.05 * (earning - 2000);
	}
	else if (earning < 4000)
	{
		tax = 50 + 0.1 * (earning - 3000);
	}
	else if (earning < 5000)
	{
		tax = 150 + 0.15 * (earning - 4000);
	}
	else
	{
		tax = 300 + 0.2 * (earning - 5000);
	}
	printf("The tax is: %.4lf\n", tax);
	system("pause");
	return 0;
}