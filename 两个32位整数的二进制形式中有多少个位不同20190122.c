#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int differentBit(uint32_t n1, uint32_t n2)
{
	int ret = 0;

	for (int i = 0; i < 32; ++i)
	{
		if (((n1 >> i) & 1) != ((n2 >> i) & 1))
		{
			++ret;
		}
	}

	return ret;
}

int main()
{
	uint32_t num1 = 0;
	uint32_t num2 = 0;
	int different_bit = 0;

	printf("请输入两个整数: \n");
	scanf("%d %d", &num1, &num2);
	different_bit = differentBit(num1, num2);
	printf("%d和%d的二进制形式中%d个位不同!\n",
		num1, num2, different_bit);

	system("pause");
	return 0;
}