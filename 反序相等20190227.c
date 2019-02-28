#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int isReverseNumber(int n)
{
	int sum = 0;
	int temp = n;
	while (temp)
	{
		sum = sum * 10 + temp % 10;
		temp /= 10;
	}
	if (n * 9 == sum)
	{
		return 1;
	}
	return 0;
}

int main()
{
	int i = 0;
	printf("The reverse number is below: \n");
	for (i = 1000; i < 10000; ++i)
	{
		if (isReverseNumber(i))
		{
			printf("%d * 9 == %d\n", i, i * 9);
		}
	}
	system("pause");
	return 0;
}