#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

#define LEN 10

int main()
{
	int arr[LEN][LEN] = { 0 };
	int i = 0;
	int j = 0;

	for (i = 0; i < LEN; ++i)
	{
		for (j = 0; j <= i; ++j)
		{
			arr[i][j] = 1;
		}
	}
	for (i = 2; i < LEN; ++i)
	{
		for (j = 1; j < i; ++j)
		{
			arr[i][j] = arr[i - 1][j] +
				arr[i - 1][j - 1];
		}
	}
	printf("杨辉三角打印如下: \n");
	for (i = 0; i < LEN; ++i)
	{
		for (j = 0; j <= i; ++j)
		{
			printf("%-5d", arr[i][j]);
		}
		printf("\n");
	}

	//int s = 1, h;

	//printf("请输入层高: \n");
	//scanf("%d", &h);
	//printf("1\n");
	//for (int i = 2; i <= h; ++i)
	//{
	//	printf("1 ");
	//	for (int j = 1; j <= i - 2; ++j)
	//	{
	//		printf("%d ", (s = (i - j) * s / j));
	//	}
	//	printf("1\n");
	//	s = 1;
	//}

	system("pause");
	return 0;
}