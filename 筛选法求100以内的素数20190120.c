#define _CRT_SECURE_NO_WARNINGS

//当i为质数时, i的所有倍数都是合数

#include <stdio.h>
#include <stdlib.h>

#define N 100

int main()
{
	int i = 0;
	int j = 0;
	int arr[N] = { 0 };

	for (i = 0; i < N; ++i)
	{
		arr[i] = i + 1;
	}
	//1不是素数, 将其标为0
	arr[0] = 0;
	//从2开始进行排除
	for (i = 1; i < N - 1; ++i)
	{
		for (j = i + 1; j < N; ++j)
		{
			if (arr[i] != 0 && arr[j] != 0)
			{
				if (arr[j] % arr[i] == 0)
				{
					arr[j] = 0;
				}
			}
		}
	}
	//循环打印
	for (i = 0; i < N; ++i)
	{
		if (arr[i] != 0)
		{
			printf("%d\n", arr[i]);
		}
	}

	system("pause");
	return 0;
}