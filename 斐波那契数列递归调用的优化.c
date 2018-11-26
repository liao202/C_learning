/*
**	��Ч��쳲��������еĵݹ���
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

int count = 0;

/*---�Ż��ĵݹ�---*/
/*
**	�������
**	102334155
**	�����������1��!
*/
int fibonacci(int first, int second, int n)
{
	if (n < 3)
	{
		return 1;
	}
	if (n == 3)
	{
		/*---ͳ�Ƶ���������˶��ٴ�---*/
		++count;
		return first + second;
	}
	return fibonacci(second, first + second, n - 1);
}

/*---�Ż�ǰ�ĵݹ�---*/
/*
**	�������
**	102334155
**	�����������39088169��!
*/
int fibonacci(int n)
{
	if (n < 2)
	{
		return n;
	}
	if (n == 2)
	{
		return 1;
	}
	if (n == 3)
	{
		/*---ͳ�Ƶ���������˶��ٴ�---*/
		++count;
	}
	return fibonacci(n - 1) + fibonacci(n - 2);
}

/*---�ǵݹ��㷨---*/
int fibonacci(int n)
{
	if (n < 2)
	{
		return n;
	}
	if (n == 2)
	{
		return 1;
	}
	int n_1 = 1;
	int n_2 = 1;
	int n_n = 0;
	for (int i = 3; i <= n; ++i)
	{
		n_n = n_1 + n_2;
		n_1 = n_2;
		n_2 = n_n;
 	}
	return n_n;
}

int main()
{
	printf("%d\n", fibonacci(1, 1, 40));
	printf("�����������%d��!\n", count);
	system("pause");
	return 0;
}