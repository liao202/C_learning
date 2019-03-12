#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randomNumber()
{
	return 1 + rand() % (100 - 1 + 1);
}

int specialMul(int num1, int num2)
{
	int ret = 0;
	int temp = num2;
	while (num1)
	{
		while (num2)
		{
			ret += (num1 % 10) * (num2 % 10);
			num2 /= 10;
		}
		num2 = temp;
		num1 /= 10;
	}
	return ret;
}

int main()
{
	srand((unsigned int)time(0));
	int num1 = randomNumber();
	int num2 = randomNumber();
	printf("%d %d %d\n", num1, num2, specialMul(num1, num2));
	system("pause");
	return 0;
}