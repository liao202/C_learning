/*
**	输入一串字符串,其中有数字和非数字
**	将其中连续的数字当做数存入数组
**	并统计个数,将其输出
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

int a[10];

int number_find(char* str)
{
	int i = 0;
	int series_number_count = 0;
	int k = 0;
	int m = 0;
	int e = 0;
	int digit = 0;
	int num = 0;
	while (*(str + i) != '\0')
	{
		if ((*(str + i) >= '0') && (*(str + i) <= '9'))
		{
			++series_number_count;
		}
		else
		{
			if (series_number_count > 0)
			{
				digit = *(str + i - 1) - 48;
				k = 1;
				while (k < series_number_count)
				{
					e = 1;
					for (m = 1; m <= k; ++m)
					{
						e *= 10;
					}
					digit += (*(str + i - 1 - k) - 48) * e;
					++k;
				}
				a[num] = digit;
				++num;
				series_number_count = 0;
			}
		}
		++i;
	}
	if (series_number_count > 0)
	{
		digit = *(str + i - 1) - 48;
		k = 1;
		while (k < series_number_count)
		{
			e = 1;
			for (m = 1; m <= k; ++m)
			{
				e *= 10;
			}
			digit += (*(str + i - 1 - k) - 48) * e;
			++k;
		}
		a[num] = digit;
		++num;
	}
	return num;
}

int main()
{
	char arr[50];
	int n = 0;
	printf("输入一个字符串: \n");
	gets(arr);
	n = number_find(arr);
	printf("There are %d numbers in the string."
		"\nThey are: \n", n);
	for (int i = 0; i < n; ++i)
	{
		printf("%d\t", a[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}