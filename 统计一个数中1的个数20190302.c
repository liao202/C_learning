#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int countOneBit1(int num)
{
	int i = 0;
	int ret = 0;
	for (i = 0; i < 32; ++i)
	{
		if (((num >> i) & 1) == 1)
		{
			++ret;
		}
	}
	return ret;
}

int countOneBit2(int num)
{
	int ret = 0;
	while (num)
	{
		++ret;
		num = num & (num - 1);
	}
	return ret;
}

int main()
{
	int num = 0;
	printf("Please input num: \n");
	scanf("%d", &num);
	printf("%d\n", countOneBit1(num));
	printf("%d\n", countOneBit2(num));
	system("pause");
	return 0;
}