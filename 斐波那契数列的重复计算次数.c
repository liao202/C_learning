/*
**	��쳲��������еĵ�40��,�۲����������˶��ٴ�
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

int count;

int fabonacci(int n)
{
	if (n <= 0)
	{
		return 0;
	}
	if (n == 1 || n == 2)
	{
		return 1;
	}
	if (n == 3)
	{
		++count;
	}
	return fabonacci(n - 1) + fabonacci(n - 2);
}

int main()
{
	printf("%d\n", fabonacci(40));
	printf("�����������%d��!\n", count);
	system("pause");
	return 0;
}