#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int cntOne(int n)
{
	int i = 0;
	int ret = 0;
	for (i = 1; i <= n; ++i)
	{
		int temp = i;
		while (temp)
		{
			if (temp % 10 == 1)
			{
				++ret;
			}
			temp /= 10;
		}
	}
	return ret;
}

int main()
{
	int n = 0;
	int result = 0;
	printf("Please input n: \n");
	scanf("%d", &n);
	result = cntOne(n);
	printf("%d\n", result);
	system("pause");
	return 0;
}