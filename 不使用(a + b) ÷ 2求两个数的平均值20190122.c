#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int average(int a, int b)
{
	return (a & b) + ((a ^ b) >> 1);
}

int main()
{
	int a = 10;
	int b = 20;
	int avg = 0;

	avg = average(a, b);
	printf("%d和%d的均值为: %d\n",
		a, b, avg);

	system("pause");
	return 0;
}