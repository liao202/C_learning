/*
** 2018_11_07
** �ݹ�ͷǵݹ�ķ�����쳲��������ĵ�N��
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

/*---����һ���ݹ鷨---*/
int fabonacci(int n)
{
	if (n < 1)
	{
		return -1;
	}
	if (n == 1 || n == 2)
	{
		return 1;
	}
	return fabonacci(n - 1) + fabonacci(n - 2);
}

int main()
{
	int n = 0;
	printf("please input the number n: ");
	scanf("%d", &n);
	printf("The %dth fabonacci number is:%d.\n", n, fabonacci(&n));
	system("pause");
	return 0;
}

/*---���������ǵݹ鷨---*/
int main()
{
	int fabonacci_array[1024] = { 1, 1 };
	int n = 0;
	printf("please input the number n: ");
	scanf("%d", &n);
	for (int i = 2; i < n; i++)
	{
		fabonacci_array[i] = fabonacci_array[i - 1] + fabonacci_array[i - 2];
	}
	printf("The %dth fabonacci number is: %d.\n", n, fabonacci_array[n - 1]);
	system("pause");
	return 0;
}