#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int jumpFloorII(int n)
{
	if (n < 0)
	{
		return -1;
	}
	if (n == 0)
	{
		return 0;
	}
	int i = 0;
	int methods = 1;
	for (i = 1; i < n; ++i)
	{
		methods *= 2;
	}
	return methods;
}

int main()
{
	int n = 0;
	int methods = 0;
	printf("Please enter the n: \n");
	scanf("%d", &n);
	methods = jumpFloorII(n);
	printf("The are %d methods!\n", methods);
	system("pause");
	return 0;
}