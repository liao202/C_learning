/*
**	ʮ����ת������
**	�ݹ�ͷǵݹ����ʽ
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

#define N 32

/*---�ݹ鷨---*/
//void decimalToBinary(int n)
//{
//	if (n / 2 != 0)
//	{
//		decimalToBinary(n / 2);
//	}
//	printf("%-2d", n % 2);
//}

/*---�ǵݹ鷨---*/
void decimalToBinary(int n)
{
	int i = 0;
	while (i < N)
	{
		printf("%-2d", (n >> i) & 1);
		++i;
		/*---������---*/
		//n /= 2;
	}
}

int main()
{
	int number = 0;
	printf("������ʮ������: \n");
	scanf("%d", &number);
	decimalToBinary(number);
	printf("\n");
	system("pause");
	return 0;
}