/*
**	���Ӻ�����
**	���1~N(N < 32767)֮������ͬʱ��������������������(A, B)
**	3 < A < B < N
**	A������֮�͵���B, ��B�����Ӻ͵���A
**	һ���������Ӻ�, ���˱�����������е����Ӻ�
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

/*---��n�����Ӻ�---*/
int factorSum(int n)
{
	/*---���Ӻ�---*/
	int sum = 0;
	/*---��n������---*/
	for (int i = 1; i <= n / 2; ++i)
	{
		if (n % i == 0)
		{
			/*---����n������---*/
			sum += i;
		}
	}
	return sum;
}

int main()
{
	int factor_sum = 0;
	printf("��������������������: \n");
	for (int i = 4; i < 32767; ++i)
	{
		/*---��i�����Ӻ�---*/
		factor_sum = factorSum(i);
		/*---�ж�i�����Ӻ͵����Ӻ��Ƿ����i---*/
		if ((i == factorSum(factor_sum)) && (factor_sum > i))
		{
			printf("(%d, %d)  ", i, factor_sum);
		}
	}
	printf("\n");
	system("pause");
	return 0;
}