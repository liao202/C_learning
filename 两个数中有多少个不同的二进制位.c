/*
**	������m��n���ж��ٸ���ͬ�Ķ�����λ
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

/*---m��n���ж��ٸ���ͬ��λ---*/
/*---����һ---*/
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

/*---������---*/
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

/*---������---*/
int differentBit(int m, int n)
{
	int temp = 0;
	int count = 0;
	/*---m��n��λ���---*/
	temp = m ^ n;
	/*---ͳ��temp���ж��ٸ�1, ��temp���͸�Ϊunsigned int---*/
	/*while (temp != 0)
	{
		if (temp % 2 == 1)
		{
			++count;
		}
		temp /= 2;
	}*/
	/*---ͳ��temp���ж��ٸ�1---*/
	for (int i = 0; i < 32; ++i)
	{
		if (((temp >> i) & 1) == 1)
		{
			++count;
		}
	}
	/*---ͳ��temp���ж��ٸ�1---*/
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
	printf("����������m��n: \n");
	scanf("%d %d", &m, &n);
	count = differentBit(m, n);
	printf("%d��%d����%d����ͬ��λ!\n", m, n, count);
	system("pause");
	return 0;
}