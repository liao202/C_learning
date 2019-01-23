#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

unsigned int reverseBitNumber(unsigned int n)
{
	unsigned int ret = 0;
	for (int i = 0; i < 32; ++i)
	{
		ret += ((n >> i) & 1) *
			(unsigned int)pow(2, 32 - i - 1);
	}
	return ret;
}

int main()
{
	unsigned int num = 0;
	unsigned int reverse_bit_num = 0;

	printf("������һ������: \n");
	scanf("%u", &num);
	reverse_bit_num = reverseBitNumber(num);
	printf("%u�Ķ����Ʒ�ת��õ���������Ϊ: %u\n",
		num, reverse_bit_num);

	system("pause");
	return 0;
}