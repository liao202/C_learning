/*
**	С��һ�����������������������ĸ���	
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

/*---�������ж�---*/
int isPrime(int n)
{
	for (int i = 2; i < n; ++i)
	{
		if (n % i == 0)
		{
			return 0;
		}
	}
	return 1;
}

/*---��������ͳ��---*/
int primesCount(int n)
{
	int count = 0;
	int flag = 0;
	for (int i = 2; i < n; ++i)
	{
		flag = isPrime(i);
		if (flag == 1)
		{
			++count;
		}
	}
	return count;
}

int main()
{
	int num = 0;
	int count = 0;
	printf("������һ���Ǹ���: \n");
	scanf("%d", &num);
	count = primesCount(num);
	printf("С��%d����%d������!\n", num, count);
	system("pause");
	return 0;
}