/*
**	��λ������ʵ��ѭ�����ƺ�ѭ������
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

#define LEN sizeof(unsigned int) * 8

/*---ѭ������nλ---*/
unsigned int move_right(unsigned int number, int n)
{
	unsigned int result = 0;
	result = (number >> n) | (number << (LEN - n));
	return result;
}

/*---ѭ������nλ---*/
unsigned int move_left(unsigned int number, int n)
{
	unsigned int result = 0;
	result = (number << n) | (number >> (LEN - n));
	return result;
}

int main()
{
	unsigned int number = 0;
	int n = 0;
	printf("�������޷�����������: \n");
	scanf("%u", &number);
	printf("������ѭ����λ��λ��n: \n");
	scanf("%d", &n);
	printf("ѭ������%dλ��Ľ��Ϊ: \n", n);
	number = move_right(number, n);
	printf("%d\n", number);
	printf("ѭ������%dλ��Ľ��Ϊ: \n", n);
	number = move_left(number, n);
	printf("%d\n", number);
	system("pause");
	return 0;
}