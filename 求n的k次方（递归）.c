/*
** 2018_11_07
** 函数实现n^k，使用递归实现
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

int pow_n_k(int n, int k)
{
	if (n == 0)
	{
		return 0;
	}
	if (n == 1)
	{
		return 1;
	}
	if (k == 0)
	{
		return 1;
	}
	return n * pow_n_k(n, k - 1);
}

int main()
{
	int n = 0;
	int k = 0;
	printf("please input the number(n, k):");
	scanf("%d %d", &n, &k);
	printf("The sqrt(%d, %d) is: %d.\n", n, k, pow_n_k(n, k));
	system("pause");
	return 0;
}