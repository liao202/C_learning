/*
**	��д����ͳ����������Ķ�������ʽ��1�ĸ���,�����ظ���
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

/*---����һ---*/
int bit_one_count(int number)
{
	int count = 0;
	for (int i = 0; i < 32; ++i)
	{
		if (number & (1 << i))
		{
			++count;
		}
	}
	return count;
}

int main()
{
	int number = 0;
	int bit_one = 0;
	printf("please input the number: \n");
	scanf("%d", &number);
	bit_one = bit_one_count(number);
	printf("%d��1�ĸ���Ϊ%d��!\n", number, bit_one);
	system("pause");
	return 0;
}

/*---������---*/
int bit_one_count(unsigned int number)
{
	int count = 0;
	while (number)
	{
		if (number % 2 == 1)
		{
			++count;
		}
		number /= 2;
	}
	return count;
}

int main()
{
	unsigned int number = 0;
	int count = 0;
	printf("please input unsigned number: \n");
	scanf("%d", &number);
	count = bit_one_count(number);
	printf("%d����%d��1\n", number, count);
	system("pause");
	return 0;
}