/*
**	�ݹ��㷨��Ǹ�������ÿλ֮��
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

//ÿλ֮��
int addDigits(int n)
{
	if (n > 0)
	{
		return n % 10 + addDigits(n / 10);
	}
	return 0;
}

int main()
{
	int num = 0;
	int result = 0;
	printf("������Ǹ�����: \n");
	scanf("%d", &num);
	result = addDigits(num);
	printf("���Ϊ: %d\n", result);
	system("pause");
	return 0;
}