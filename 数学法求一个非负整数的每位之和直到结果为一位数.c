/*
**	��ѧ����һ���Ǹ�������ÿλ��ֱ�����Ϊһλ��
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

//��һ���Ǹ�������ÿλ��
int addDigits(int n)
{
	return 1 + (n - 1) % 9;
}

int main()
{
	int num = 0;
	printf("������һ���Ǹ�����: \n");
	scanf("%d", &num);
	printf("���Ϊ: %d\n", addDigits(num));
	system("pause");
	return 0;
}