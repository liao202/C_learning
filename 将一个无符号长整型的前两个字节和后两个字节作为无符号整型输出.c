/*
**	��һ���޷��ų����͵�ǰ�����ֽںͺ������ֽ���Ϊ�����޷����������
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

union num
{
	unsigned long number;
	unsigned short num_arr[2];
};

void trans(unsigned long number)
{
	union num num1;
	num1.number = number;
	printf("����������Ϊ: %lu\nǰ�����ֽ�Ϊ: %u\n�������ֽ�Ϊ: %u\n",
		num1.number, num1.num_arr[1], num1.num_arr[0]);
}

int main()
{
	unsigned long number = 0;
	printf("�������޷��ų�����number��ֵ: \n");
	scanf("%lu", &number);
	trans(number);
	system("pause");
	return 0;
}

//  [11/26/2018 ��ʰ������]