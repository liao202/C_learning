#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

#define N 10

void yanghuiTriangle(int yanghui[][N], int order)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < order; ++i)
	{
		yanghui[i][i] = 1;
	}
	for (i = 0; i < order; ++i)
	{
		yanghui[i][0] = 1;
	}
	for (i = 2; i < order; ++i)
	{
		for (j = 1; j < i; ++j)
		{
			yanghui[i][j] = yanghui[i - 1][j] 
				+ yanghui[i - 1][j - 1];
		}
	}
}

void yanghuiDisplay(int yanghui[][N], int order)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < order; ++i)
	{
		for (j = 0; j <= i; ++j)
		{
			printf("%-5d", yanghui[i][j]);
		}
		printf("\n");
	}
}

int main()
{
	int yanghui[N][N] = { 0 };

	printf("The YanghuiTriangle is display: \n");
	yanghuiTriangle(yanghui, N);
	yanghuiDisplay(yanghui, N);

	system("pause");
	return 0;
}