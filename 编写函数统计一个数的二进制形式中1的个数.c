/*
**	ͳ��һ�����Ķ�������ʽ��1�ĸ���
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

/*---����һ---*/
int countOneBits(int value)
{
	int count = 0;
	while (value != 0)
	{
		if (value % 2 == 1)
		{
			++count;
		}
		value /= 2;
	}
	return count;
}

/*---������---*/
int countOneBits(int value)
{
	int count = 0;
	while (value != 0)
	{
		value = value & (value - 1);
		++count;
	}
	return count;
}

/*---������---*/
int countOneBits(int value)
{
	int count = 0;
	for (int i = 0; i < 32; ++i)
	{
		if (((value >> i) & 1) == 1)
		{
			++count;
		}
	}
	return count;
}

/*---������---*/
int countOneBits(int value)
{
	int count = 0;
	for (int i = 0; i < 32; ++i)
	{
		if (value & (1 << i))
		{
			++count;
		}
	}
	return count;
}

int main()
{
	int count = 0;
	int value = 0;
	printf("����������value��ֵ: \n");
	scanf("%d", &value);
	count = countOneBits(value);
	printf("%d����%d��1!\n", value, count);
	system("pause");
	return 0;
}