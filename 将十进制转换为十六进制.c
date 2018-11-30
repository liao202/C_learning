/*
**	��ʮ������ת��Ϊʮ��������
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

#define LEN 50

/*---ʮ����תʮ������---*/
void decimalToHex(int decimal)
{
	char hex[LEN] = { '0' };
	int temp = 0;
	int count = 0;
	for (int i = 0; decimal > 0; ++i)
	{
		temp = decimal % 16;
		if (temp >= 0 && temp <= 9)
		{
			hex[i] = temp + '0';
			++count;
			decimal /= 16;
		}
		if (temp >= 10 && temp <= 15)
		{
			hex[i] = temp - 10 + 'A';
			++count;
			decimal /= 16;
		}
	}
	/*---��ӡ��ʮ��������---*/
	printf("ʮ��������Ϊ: \n");
	for (int i = count - 1; i >= 0; --i)
	{
		printf("%c", hex[i]);
	}
	printf("\n");
}

int main()
{
	int decimal = 0;
	/*---���븺������---*/
	while (decimal >= 0)
	{
		printf("������ʮ������: \n");
		scanf("%d", &decimal);
		decimalToHex(decimal);
	}
	system("pause");
	return 0;
}