#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int rectCover(int n)
{
	if (n <= 0)
	{
		return -1;
	}
	if (n == 1)
	{
		return 1;
	}
	if (n == 2)
	{
		return 2;
	}
	int i = 0;
	int n_1 = 2;
	int n_2 = 1;
	int n_n = 0;
	for (i = 3; i <= n; ++i)
	{
		n_n = n_1 + n_2;
		n_2 = n_1;
		n_1 = n_n;
	}
	return n_n;
}

int main()
{
	int n = 0;
	int methods = 0;
	printf("Please enter the n: \n");
	scanf("%d", &n);
	methods = rectCover(n);
	printf("There are %d methods!\n", methods);
	system("pause");
	return 0;
}