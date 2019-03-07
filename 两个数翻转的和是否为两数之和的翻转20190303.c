#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int turnNumber(int n)
{
	int ret = 0;
	while (n)
	{
		ret = ret * 10 + n % 10;
		n /= 10;
	}
	return ret;
}

int isConform(int num1, int num2)
{
	if (turnNumber(num1 + num2) == turnNumber(num1) + turnNumber(num2))
	{
		return 1;
	}
	return 0;
}

int main()
{
	int num1 = 0;
	int num2 = 0;
	printf("Please input num1 and num2: \n");
	scanf("%d %d", &num1, &num2);
	printf("%d\n", isConform(num1, num2));
	system("pause");
	return 0;
}