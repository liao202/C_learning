/*
**	���ӷ�������
**	����Ϊ쳲���������
**	���Ժ�ÿ���µ���������
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

/*---쳲���������, �ݹ鷨---*/
//int fabonacci(int n)
//{
//	if (n < 0)
//	{
//		return -1;
//	}
//	if (n == 1 || n == 2)
//	{
//		return 1;
//	}
//	return fabonacci(n - 1) + fabonacci(n - 2);
//}

/*---쳲���������, �ǵݹ鷨---*/
int fabonacci(int n)
{
	int n_1 = 1;
	int n_2 = 1;
	int n_n = 0;
	if (n < 0)
	{
		return -1;
	}
	if (n == 1 || n == 2)
	{
		return 1;
	}
	for (int i = 3; i <= n; ++i)
	{
		n_n = n_1 + n_2;
		n_2 = n_1;
		n_1 = n_n;
	}
	return n_n;
}

int main()
{
	int number = 0; 
	printf("�������·�: \n");
	scanf("%d", &number);
	//��ӡǰnumber���µ���������
	for (int i = 1; i <= number; ++i)
	{
		printf("%d�µ���������Ϊ: %d.\n", i, fabonacci(i));
	}
	system("pause");
	return 0;
}