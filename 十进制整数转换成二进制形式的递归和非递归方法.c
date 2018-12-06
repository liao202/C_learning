/*
**	十进制转二进制
**	递归和非递归的形式
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

#define N 32

/*---递归法---*/
//void decimalToBinary(int n)
//{
//	if (n / 2 != 0)
//	{
//		decimalToBinary(n / 2);
//	}
//	printf("%-2d", n % 2);
//}

/*---非递归法---*/
void decimalToBinary(int n)
{
	int i = 0;
	while (i < N)
	{
		printf("%-2d", (n >> i) & 1);
		++i;
		/*---不可行---*/
		//n /= 2;
	}
}

int main()
{
	int number = 0;
	printf("请输入十进制数: \n");
	scanf("%d", &number);
	decimalToBinary(number);
	printf("\n");
	system("pause");
	return 0;
}