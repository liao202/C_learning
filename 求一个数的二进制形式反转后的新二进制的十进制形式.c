/*
**	��һ������ת��Ϊ��������ʽ
**	�ٽ��ö���������ת,�õ���
**	�Ķ�������,���ظö�������
**	��ʮ������ʽ
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"
#include "math.h"

unsigned int reverse_bit(unsigned int value)
{
	int bit_arr[32] = { 0 };
	unsigned int result = 0;
	/*---��value��32λȡ������bit_arr����---*/
	for (int i = 0; i < 32; ++i)
	{
		bit_arr[i] = value % 2;
		value /= 2;
	}
	/*---�������е�Ԫ����������һ���µ�ʮ������---*/
	double j = 31;
	for (int i = 0; i < 32; ++i, --j)
	{
		result += bit_arr[i] * (unsigned int)pow(2.0, j);
	}
	return result;
}

int main()
{
	unsigned int number = 0;
	unsigned int result = 0;
	printf("����������: \n");
	scanf("%u", &number);
	result = reverse_bit(number);
	printf("%u\n", result);
	system("pause");
	return 0;
}