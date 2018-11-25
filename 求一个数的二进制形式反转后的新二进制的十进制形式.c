/*
**	将一个数的转换为二进制形式
**	再将该二进制数反转,得到新
**	的二进制数,返回该二进制数
**	的十进制形式
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"
#include "math.h"

unsigned int reverse_bit(unsigned int value)
{
	int bit_arr[32] = { 0 };
	unsigned int result = 0;
	/*---将value的32位取出放入bit_arr数组---*/
	for (int i = 0; i < 32; ++i)
	{
		bit_arr[i] = value % 2;
		value /= 2;
	}
	/*---将数组中的元素逆序生成一个新的十进制数---*/
	double j = 31;
	for (int i = 0; i < 32; ++i, --j)
	{
		result += bit_arr[i] * (unsigned int)pow(2.0, j);
	}
	return result;
}

int main()
{
	unsigned int number = 0;
	unsigned int result = 0;
	printf("请输入数字: \n");
	scanf("%u", &number);
	result = reverse_bit(number);
	printf("%u\n", result);
	system("pause");
	return 0;
}