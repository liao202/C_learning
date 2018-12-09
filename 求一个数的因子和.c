/*
**	��һ���������Ӻ�(���˱���)
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

/*---���Ӻͼ���, ����һ---*/
//int factorSum(int n)
//{
//	int sum = 0;
//	for (int i = 1; i <= n / 2; ++i)
//	{
//		/*---���i��n������---*/
//		if (n % i == 0)
//		{
//			sum += i;
//		}
//	}
//	return sum;
//}

/*---���Ӻͼ���, ������---*/
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
	printf("������һ������: \n");
	scanf("%d", &number);
	factor_sum = factorSum(number);
	printf("%d�����Ӻ�Ϊ: %d!\n", number, factor_sum);
	system("pause");
	return 0;
}