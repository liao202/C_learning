#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int isPerfectNumber(int n)
{
	int i = 0;
	int sum = 0;
	for (i = 1; i < n; ++i)
	{
		if (n % i == 0)
		{
			sum += i;
		}
	}
	if (sum == n)
	{
		return 1;
	}
	return 0;
}

int isAbundantNumber(int n)
{
	int i = 0;
	int sum = 0;
	for (i = 1; i < n; ++i)
	{
		if (n % i == 0)
		{
			sum += i;
		}
	}
	if (sum > n)
	{
		return 1;
	}
	return 0;
}

int main()
{
	int i = 0;
	for (i = 2; i <= 60; ++i)
	{
		if (isPerfectNumber(i))
		{
			printf("%d is perfect number!\n", i);
		}
		if (isAbundantNumber(i))
		{
			printf("%d is abundant number!\n", i);
		}
	}
	system("pause");
	return 0;
}