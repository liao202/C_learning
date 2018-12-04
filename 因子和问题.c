/*
**	因子和问题
**	输出1~N(N < 32767)之间所有同时满足下列条件的整数对(A, B)
**	3 < A < B < N
**	A的因子之和等于B, 且B的因子和等于A
**	一个数的因子和, 除了本身以外的所有的因子和
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

/*---求n的因子和---*/
int factorSum(int n)
{
	/*---因子和---*/
	int sum = 0;
	/*---找n的因子---*/
	for (int i = 1; i <= n / 2; ++i)
	{
		if (n % i == 0)
		{
			/*---加上n的因子---*/
			sum += i;
		}
	}
	return sum;
}

int main()
{
	int factor_sum = 0;
	printf("满足条件的整数对如下: \n");
	for (int i = 4; i < 32767; ++i)
	{
		/*---求i的因子和---*/
		factor_sum = factorSum(i);
		/*---判断i的因子和的因子和是否等于i---*/
		if ((i == factorSum(factor_sum)) && (factor_sum > i))
		{
			printf("(%d, %d)  ", i, factor_sum);
		}
	}
	printf("\n");
	system("pause");
	return 0;
}