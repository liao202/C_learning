/*
**	��4λʮ��������ת��Ϊ16λ��������
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main()
{
	char hex_number[5] = "12ac";
	int bit_number[16] = { 0 };
	int temp = 0;
	int index = 0;
	printf("ʮ��������Ϊ: %s\n", hex_number);
	for (int i = 3; i >= 0; --i)
	{
		/*---�����0~9֮��---*/
		if (hex_number[i] >= '0' &&
			hex_number[i] <= '9')
		{
			temp = hex_number[i] - '0';
		}
		/*---�����a~f֮��---*/
		if (hex_number[i] >= 'a' &&
			hex_number[i] <= 'f')
		{
			temp = hex_number[i] - 'a' + 10;
		}
		/*---��ʮ������ת��Ϊ������---*/
		for (int j = 0; index < 16 && j < 4; ++index, ++j)
		{
			bit_number[index] = (temp >> j) & 1;
		}
	}
	/*---���������Ĵ�ӡ---*/
	printf("��ʮ���������Ķ�������ʽ����: \n");
	for (int i = 15, j = 0; i >= 0; --i)
	{
		if ((i + 1) % 4 == 0)
		{
			printf("\n%c: ", hex_number[j]);
			++j;
		}
		printf("%-2d", bit_number[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}