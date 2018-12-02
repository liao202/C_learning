/*
**	统计一个数的二进制形式中有多少个1
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

/*---方法一---*/
int bitOneCount(unsigned int value)
{
	int count = 0;
	while (value != 0)
	{
		if (value % 2 == 1)
		{
			++count;
		}
		/*---value必须为unsigned int类型, 否则会出错---*/
		value /= 2;
	}
	return count;
}

/*---方法二---*/
//int bitOneCount(int value)
//{
//	int count = 0;
//	for (int i = 0; i < 32; ++i)
//	{
//		if (((value >> i) & 1) == 1)
//		{
//			++count;
//		}
//	}
//	return count;
//}

/*---方法三---*/
//int bitOneCount(int value)
//{
//	int count = 0;
//	for (int i = 0; i < 32; ++i)
//	{
//		/*
//		**	注意if内的条件
//		**	不能更改为如下
//		**	(value & (1 << i)) == 1
//		**	会出错, 与方法二对比
//		*/
//		if ((value & (1 << i)))
//		{
//			++count;
//		}
//	}
//	return count;
//}

/*---注意方法二和方法三的区别---*/

int main()
{
	int count;
	int value = 0;
	printf("请输入数值value: \n");
	scanf("%d", &value);
	count = bitOneCount(value);
	printf("%d中有%d个1!\n", value, count);
	system("pause");
	return 0;
}