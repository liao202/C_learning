/*
**	��һ���Ǹ�������ÿһλ���, ֱ�����Ϊһλ��
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

//����λ���
int addDigits(int n)
{
	if (n > 0)
	{
		return n % 10 + addDigits(n / 10);
	}
	return 0;
}

//�ж�ÿһλ�ĺͽ���Ƿ�Ϊһλ��
int isUnit(int n)
{
	while (n > 10)
	{
		n = addDigits(n);
	}
	return n;
}

int main()
{
	int num = 0;
	int result = 0;
	printf("������һ���Ǹ�����: \n");
	scanf("%d", &num);
	result = isUnit(num);
	printf("���Ϊ: %d\n", result);
	system("pause");
	return 0;
}