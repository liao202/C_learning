/*
**	��һ���Ǹ�������ÿһλ���
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

//ÿλ���
int addDigits(int n)
{
	int ret = 0;
	while (n != 0)
	{
		ret += n % 10;
		n /= 10;
	}
	return ret;
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