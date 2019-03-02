#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// ²Ë¼¦°æ
int isPrimeNumber1(int n)
{
	if (n <= 1)
	{
		return 0;
	}
	int i = 0;
	for (i = 2; i < n; ++i)
	{
		if (n % i == 0)
		{
			return 0;
		}
	}
	return 1;
}

// ±ê×¼°æ
int isPrimeNumber2(int n)
{
	if (n <= 1)
	{
		return 0;
	}
	int i = 0;
	for (i = 2; i <= (int)sqrt(n); ++i)
	{
		if (n % i == 0)
		{
			return 0;
		}
	}
	return 1;
}

// ¸ßÅä°æ
int isPrimeNumber3(int n)
{
	if (n <= 1)
	{
		return 0;
	}
	if (n == 2)
	{
		return 1;
	}
	if (n % 2 != 0)
	{
		int i = 0;
		for (i = 3; i <= (int)sqrt(n); i += 2)
		{
			if (n % i == 0)
			{
				return 0;
			}
		}
	}
	else
	{
		return 0;
	}
	return 1;
}

// ×ðÏí°æ
int isPrimeNumber4(int n)
{
	if (n <= 1)
	{
		return 0;
	}
	if (n == 2 || n == 3)
	{
		return 1;
	}
	if (n % 6 != 1 && n % 6 != 5)
	{
		return 0;
	}
	int i = 0;
	for (i = 5; i <= (int)sqrt(n); i += 6)
	{
		if (n % i == 0 || n % (i + 2) == 0)
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	int num = 0;
	int flag = 0;
	printf("Please input the num: \n");
	scanf("%d", &num);
	flag = isPrimeNumber4(num);
	if (flag == 1)
	{
		printf("%d is prime number!\n", num);
	}
	else
	{
		printf("%d is not prime number!\n", num);
	}
	system("pause");
	return 0;
}