/*
**	在输入的一串字符串中,找连续数字组成的整数
**	统计个数,并输出这些整数
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int integer[20];

int integer_find(char* str)
{
	int len = strlen(str);
	/*---连续数字的个数---*/
	int series_number_count = 0;
	/*---整数个数---*/
	int integer_count = 0;
	/*---该连续数字组成整数的数值---*/
	int digit = 0;
	int index = len - 1;
	/*---反向遍历,从后往前---*/
	for (; index >= 0; --index)
	{
		/*---如果该位是数字---*/
		if (*(str + index) >= '0' && *(str + index) <= '9')
		{
			++series_number_count;
		}
		/*---如果该位不是数字---*/
		else
		{
			/*---后面有series_number_count个数---*/
			if (series_number_count > 0)
			{
				/*---个位加上十位上的数字乘10,依次递加---*/
				for (int temp = 1; series_number_count > 0; --series_number_count)
				{
					digit += (*(str + index + series_number_count) - 48) * temp;
					temp *= 10;
				}
				/*---将整数放入数组---*/
				integer[integer_count] = digit;
				/*---数值清零,方便下次统计---*/
				digit = 0;
				/*---整数个数加1---*/
				++integer_count;
			}
		}
	}
	/*---数字在最后,后面没有非数字---*/
	if (series_number_count > 0)
	{
		/*---个位加上十位上的数字乘10,依次递加---*/
		for (int temp = 1; series_number_count > 0; --series_number_count)
		{
			digit += (*(str + index + series_number_count) - 48) * temp;
			temp *= 10;
		}
		/*---将整数放入数组---*/
		integer[integer_count] = digit;
		/*---数值清零,方便下次统计---*/
		digit = 0;
		/*---整数个数加1---*/
		++integer_count;
	}
	return integer_count;
}

int main()
{
	char str[50];
	int integer_count = 0;
	printf("请输入字符串: \n");
	gets(str);
	integer_count = integer_find(str);
	printf("一共有%d个整数!\n这些整数如下: \n",
		integer_count);
	/*---字符串中的整数的打印---*/
	for (int i = integer_count - 1; i >= 0; --i)
	{
		printf("%d\t", integer[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}