/*
**	将4位十六进制数转化为16位二进制数
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main()
{
	char hex_number[5] = "12ac";
	int bit_number[16] = { 0 };
	int temp = 0;
	int index = 0;
	printf("十六进制数为: %s\n", hex_number);
	for (int i = 3; i >= 0; --i)
	{
		/*---如果在0~9之间---*/
		if (hex_number[i] >= '0' &&
			hex_number[i] <= '9')
		{
			temp = hex_number[i] - '0';
		}
		/*---如果在a~f之间---*/
		if (hex_number[i] >= 'a' &&
			hex_number[i] <= 'f')
		{
			temp = hex_number[i] - 'a' + 10;
		}
		/*---将十六进制转化为二进制---*/
		for (int j = 0; index < 16 && j < 4; ++index, ++j)
		{
			bit_number[index] = (temp >> j) & 1;
		}
	}
	/*---二进制数的打印---*/
	printf("该十六进制数的二进制形式如下: \n");
	for (int i = 15, j = 0; i >= 0; --i)
	{
		if ((i + 1) % 4 == 0)
		{
			printf("\n%c: ", hex_number[j]);
			++j;
		}
		printf("%-2d", bit_number[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}