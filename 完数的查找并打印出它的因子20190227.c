#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void divisorDisplay(int n)
{
	int i = 0;
	printf("The divisor is: ");
	for (i = 1; i < n; ++i)
	{
		if (n % i == 0)
		{
			printf("%d ", i);
		}
	}
	printf("\n");
}

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

void perfectNumberDisplay(int left, int right)
{
	int i = 0;
	for (i = left; i <= right; ++i)
	{
		if (isPerfectNumber(i))
		{
			printf("%d is perfect number! ", i);
			divisorDisplay(i);
		}
	}
}

int main()
{
	int left = 0;
	int right = 0;
	printf("Please input left and right: \n");
	scanf("%d %d", &left, &right);
	perfectNumberDisplay(left, right);
	system("pause");
	return 0;
}