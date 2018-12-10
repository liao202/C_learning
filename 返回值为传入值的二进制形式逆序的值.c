/*
**	����ֵ�Ǵ���ֵ�Ķ�������ʽ������
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"
#include "stdint.h"
#include "math.h"

#define LEN 32

/*---������������ֵ����---*/
//����һ
//uint32_t valueBinaryReverse(uint32_t value)
//{
//	uint32_t ret = 0;
//	for (int i = 1; i <= 32; ++i)
//	{
//		ret = ret + ((value >> (i - 1)) & 1) * (uint32_t)pow(2, 32 - i);
//	}
//	return ret;
//}

//������
uint32_t valueBinaryReverse(uint32_t value)
{
	uint32_t temp = 0;
	for (int i = 0; i < LEN; ++i)
	{
		//ע�ⲻ���Ȱ�λ��, ������1
		//���ƶ�32��, ��value���λ�Ƴ�ȥ��
		temp = temp << 1;
		temp = temp | ((value >> i) & 1);
	}
	return temp;
}

int main()
{
	uint32_t n = 0;
	uint32_t result = 0;
	printf("����������: \n");
	scanf("%u", &n);
	result = valueBinaryReverse(n);
	printf("�������: %u\n", result);
	system("pause");
	return 0;
}