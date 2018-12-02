/*
**	��һ���ش�����Ľ׳�, ����ʵ��
**	��n�Ľ׳�, ���ǽ�(n - 1)!�ۼ�n - 1��
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

#define LEN 1000

int factorial[LEN];
int temp[LEN];
/*---�����λ��---*/
int result_bit_amount;

/*---��֪a[]�е�(k - 1)!, ���k!����a[]---*/
void factorialNext(int number)
{
	int temp_variable = 0;
	/*---��Ҫ�ۼӵ�����Ԥ������---*/
	for (int i = 0; i < result_bit_amount; ++i)
	{
		temp[i] = factorial[i];
	}
	factorial[result_bit_amount] = 0;
	/*---ͨ���ۼ���number!---*/
	for (int m = 1; m < number; ++m)
	{
		for (int i = 0; i < result_bit_amount; ++i)
		{
			temp_variable = factorial[i] + temp[i];
			/*---��λ---*/
			factorial[i] = temp_variable % 10;
			factorial[i + 1] += temp_variable / 10;
		}
	}
	/*---������߽�λ---*/
	temp_variable = factorial[result_bit_amount];
	while (temp_variable > 0)
	{
		factorial[result_bit_amount++] = temp_variable % 10;
		temp_variable /= 10;
	}
}

/*---���factorial[result_bit_amount]�д�ŵ�number!---*/
void factorialResultDisplay(int *factorial, int number)
{
	printf("%4d != ", number);
	for (int i = result_bit_amount - 1; i >= 0; --i)
	{
		printf("%d", factorial[i]);
	}
	printf("\n\n");
}

int main()
{
	int number = 0;
	printf("����������n: \n");
	scanf("%d", &number);
	factorial[0] = 1;
	result_bit_amount = 1;
	factorialResultDisplay(factorial, 1);
	/*---�������2!��number!---*/
	for (int i = 2; i <= number; ++i)
	{
		factorialNext(i);
		factorialResultDisplay(factorial, i);
	}
	system("pause");
	return 0;
}