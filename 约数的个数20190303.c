#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int divisorCount(int num)
{
	int i = 0;
	int cnt = 0;
	for (i = 1; i <= num; ++i)
	{
		if (num % i == 0)
		{
			++cnt;
		}
	}
	return cnt;
}

int main()
{
	int num = 0;
	printf("Please input the num: \n");
	scanf("%d", &num);
	printf("%d has %d divisors!\n", 
		num, divisorCount(num));
	system("pause");
	return 0;
}