/*
**	�����������ݵĶ�������ʽ���ж��ٸ���ͬ��λ
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

int bit_different(int number_a, int number_b)
{
	int count = 0;
	for (int i = 0; i < 32; ++i)
	{
		if (number_a % 2 != number_b % 2)
		{
			++count;
		}
		number_a /= 2;
		number_b /= 2;
	}
	return count;
}

int main()
{
	int number_a = 0;
	int number_b = 0;
	int count = 0;
	printf("����������a������b: \n");
	scanf("%d %d", &number_a, &number_b);
	count = bit_different(number_a, number_b);
	printf("%d��%d�Ķ�������ʽ����%d����ͬ��λ\n", number_a, number_b, count);
	system("pause");
	return 0;
}