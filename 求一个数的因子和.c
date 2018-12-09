/*
**	求一个数的因子和(除了本身)
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

/*---因子和计算, 方法一---*/
//int factorSum(int n)
//{
//	int sum = 0;
//	for (int i = 1; i <= n / 2; ++i)
//	{
//		/*---如果i是n的因子---*/
//		if (n % i == 0)
//		{
//			sum += i;
//		}
//	}
//	return sum;
//}

/*---因子和计算, 方法二---*/
int factorSum(int n)
{
	int sum = 1;
	int i = 2;
	int j = 0;
	do 
	{
		j = n / i;
		if (n % i == 0)
		{
			if (i == j)
			{
				sum += i;
			}
			else
			{
				sum += i + j;
			}
		}
		++i;
	} while (i < j);
	return sum;
}

int main()
{
	int number = 0;
	int factor_sum = 0;
	printf("请输入一个整数: \n");
	scanf("%d", &number);
	factor_sum = factorSum(number);
	printf("%d的因子和为: %d!\n", number, factor_sum);
	system("pause");
	return 0;
}