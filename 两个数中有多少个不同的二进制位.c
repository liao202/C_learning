/*
**	两个数m和n中有多少个不同的二进制位
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

/*---m和n中有多少个不同的位---*/
/*---方法一---*/
//int differentBit(int m, int n)
//{
//	int count = 0;
//	for (int i = 0; i < 32; ++i)
//	{
//		if (((m >> i) & 1) != ((n >> i) & 1))
//		{
//			++count;
//		}
//	}
//	return count;
//}

/*---方法二---*/
//int differentBit(int m, int n)
//{
//	int count = 0;
//	for (int i = 0; i < 32; ++i)
//	{
//		if ((m & (1 << i)) != (n & (1 << i)))
//		{
//			++count;
//		}
//	}
//	return count;
//}

/*---方法三---*/
int differentBit(int m, int n)
{
	int temp = 0;
	int count = 0;
	/*---m和n按位异或---*/
	temp = m ^ n;
	/*---统计temp中有多少个1, 将temp类型改为unsigned int---*/
	/*while (temp != 0)
	{
		if (temp % 2 == 1)
		{
			++count;
		}
		temp /= 2;
	}*/
	/*---统计temp中有多少个1---*/
	for (int i = 0; i < 32; ++i)
	{
		if (((temp >> i) & 1) == 1)
		{
			++count;
		}
	}
	/*---统计temp中有多少个1---*/
	/*for (int i = 0; i < 32; ++i)
	{
		if (temp & (1 << i))
		{
			++count;
		}
	}*/
	return count;
}

int main()
{
	int m = 0;
	int n = 0;
	int count = 0;
	printf("请输入数字m和n: \n");
	scanf("%d %d", &m, &n);
	count = differentBit(m, n);
	printf("%d和%d中有%d个不同的位!\n", m, n, count);
	system("pause");
	return 0;
}