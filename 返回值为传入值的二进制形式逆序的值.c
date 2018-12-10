/*
**	返回值是传入值的二进制形式的逆序
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"
#include "stdint.h"
#include "math.h"

#define LEN 32

/*---二进制逆序后的值函数---*/
//方法一
//uint32_t valueBinaryReverse(uint32_t value)
//{
//	uint32_t ret = 0;
//	for (int i = 1; i <= 32; ++i)
//	{
//		ret = ret + ((value >> (i - 1)) & 1) * (uint32_t)pow(2, 32 - i);
//	}
//	return ret;
//}

//方法二
uint32_t valueBinaryReverse(uint32_t value)
{
	uint32_t temp = 0;
	for (int i = 0; i < LEN; ++i)
	{
		//注意不能先按位或, 再左移1
		//会移动32次, 把value最低位移出去了
		temp = temp << 1;
		temp = temp | ((value >> i) & 1);
	}
	return temp;
}

int main()
{
	uint32_t n = 0;
	uint32_t result = 0;
	printf("请输入整数: \n");
	scanf("%u", &n);
	result = valueBinaryReverse(n);
	printf("结果如下: %u\n", result);
	system("pause");
	return 0;
}