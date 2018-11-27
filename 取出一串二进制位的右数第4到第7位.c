/*
**	һ�޷���������,ȡ���������ĵ�4����7λ
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

#define LEN sizeof(unsigned int) * 8

/*---�޷������͵Ķ�������ʽ��ʾ---*/
void bit_display(unsigned int n)
{
	int bit_arr[LEN] = { 0 };
	/*---ȡ��ÿһλ����������---*/
	for (int i = LEN - 1; i >= 0; --i)
	{
		bit_arr[i] = n % 2;
		n /= 2;
	}
	/*---��ӡ������---*/
	for (int i = 0; i < LEN; ++i)
	{
		printf("%-2d", bit_arr[i]);
	}
	printf("\n");
}

int main()
{
	unsigned int number = 0;
	unsigned int result = 0;
	printf("��������޷�����������: \n");
	scanf("%u", &number);
	/*---number�Ķ�������ʽ��ӡ---*/
	printf("%d��������ʽ����: \n", number);
	bit_display(number);
	result = (number >> 4) & (~(~0 << 4));
	/*---result�Ķ�������ʽ��ӡ---*/
	printf("ȡ����������4����7λ�������: \n");
	for (int i = 0; i < 4; ++i)
	{
		printf("%-2d", result % 2);
		result /= 2;
	}
	printf("\n");
	system("pause");
	return 0;
}