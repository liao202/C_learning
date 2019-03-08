#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int isPrimeNumber(int n)
{
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

int isPalindromeNumber(int n)
{
	int sum = 0;
	int temp = n;
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

int* primePalindromeNumber(int left, int right, int* cnt)
{
	int i = 0;
	int* ret = NULL;
	for (i = left; i <= right; ++i)
	{
		if (isPrimeNumber(i) && isPalindromeNumber(i))
		{
			++(*cnt);
			ret = (int*)realloc(ret, sizeof(int) * (*cnt));
			ret[*cnt - 1] = i;
		}
	}
	return ret;
}

int main()
{
	int i = 0;
	int cnt = 0;
	int left = 0;
	int right = 0;
	int* ret = NULL;
	printf("Please input the left and the right number: \n");
	scanf("%d %d", &left, &right);
	ret = primePalindromeNumber(left, right, &cnt);
	printf("There are %d prime palindromes in [%d, %d].\n",
		cnt, left, right);
	printf("The prime palindromes number is below: \n");
	for (i = 0; i < cnt; ++i)
	{
		printf("%d  ", ret[i]);
	}
	printf("\n");
	free(ret);
	ret = NULL;
	system("pause");
	return 0;
}