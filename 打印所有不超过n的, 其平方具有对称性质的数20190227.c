#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int isPalindromeNumber(int n)
{
	int temp = n;
	int sum = 0;
	while (temp)
	{
		sum = sum * 10 + temp % 10;
		temp /= 10;
	}
	if (sum == n)
	{
		return 1;
	}
	return 0;
}

void palindromeSquareNumberDisplay(int num)
{
	int i = 0;
	printf("The palindrome square number is below: \n");
	for (i = 1; i < num; ++i)
	{
		if (isPalindromeNumber(i * i))
		{
			printf("[%d: %d] ", i, i * i);
		}
	}
	printf("\n");
}

int main()
{
	int num = 0;
	printf("Please input the num: \n");
	scanf("%d", &num);
	palindromeSquareNumberDisplay(num);
	system("pause");
	return 0;
}