/*
**	����ת��
**	ʮ����ת������
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

#define N 5

/*---������ʮ����ת������---*/
void decimalToBinaryI(int n)
{
	if (n / 2 != 0)
	{
		decimalToBinaryI(n / 2);
	}
	printf("%d", n % 2);
}

/*---С����ʮ����ת������---*/
void decimalToBinaryD(double x, int n)
{
	int i = 1;
	double y = 0;
	while (i++ < n)
	{
		y = x * 2;
		printf("%d", (int)y);
		x = y - (int)y;
	}
}

int main()
{
	double number = 0;
	int n = 0;
	printf("������ʮ������: \n");
	scanf("%lf", &number);
	printf("������Ҫת����С���Ķ�������ʽλ��: \n");
	scanf("%d", &n);
	printf("%.4f�Ķ�������ʽ����: \n", number);
	decimalToBinaryI((int)number);
	printf(".");
	decimalToBinaryD(number - (int)number, n);
	printf("\n");
	system("pause");
	return 0;
}