#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

double globalPellet(double height, int n)
{
	double ret = 0;
	while (n)
	{
		ret += height * 3 / 2;
		height /= 2;
		--n;
	}
	return ret;
}

int main()
{
	double height = 0;
	int n = 0;
	double result = 0;
	printf("Please input the height and n: \n");
	scanf("%lf %d", &height, &n);
	result = globalPellet(height, n);
	printf("%f\n", result);
	system("pause");
	return 0;
}