/*
**	�����п�����, ����һ����λ��
**	ֻҪ���Ǹ���λ�ϵ����ֲ���ȫ
**	�����¹���, �����ĸ�����
**	��ɵ��µ��������, ��ȥ���
**	����С����, �õ�����֮��, ��
**	����������, ���ܵõ������
**	6174, �����Ϊ��λ��
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

#define LEN 4

/*---ȡ����λ����ÿһλ����������digit��---*/
void takeOutEachBit(int number, int digit[LEN])
{
	int i = 0;
	while (number != 0)
	{
		digit[i++] = number % 10;
		number /= 10;
	}
}

/*---����������������---*/
void swap(int* p1, int* p2)
{
	int temp = 0;
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

/*---�����е�Ԫ�ش�С����ð������---*/
void bubbleSort(int digit[])
{
	/*---����������ŵ�[0, bound]����---*/
	for (int bound = 0; bound < LEN; ++bound)
	{
		for (int cur = LEN - 1; cur > bound; --cur)
		{
			if (digit[cur] < digit[cur - 1])
			{
				swap(&digit[cur], &digit[cur - 1]);
			}
		}
	}
}

/*---�����С����õ��µ���---*/
int newNumber(int digit[])
{
	int ret = 0;
	/*---�ĸ�������ɵ������---*/
	int max = 0;
	/*---�ĸ�������ɵ���С��---*/
	int min = 0;
	/*---��������---*/
	for (int i = 0, j = 1; i < LEN; ++i, j *= 10)
	{
		max += digit[i] * j;
	}
	/*---�����С��---*/
	for (int i = 0, j = 1000; i < LEN; ++i, j /= 10)
	{
		min += digit[i] * j;
	}
	ret = max - min;
	return ret;
}

/*---���õ�������λ���Ƿ�����λ��---*/
int isFourBitNumber(int n)
{
	if (n / 1000 == 0)
	{
		return 0;
	}
	return 1;
}

int main()
{
	int digit[LEN] = { 0 };
	int number = 0;
	int flag = 0;
	printf("������һ��ÿһλ����ȫ��ͬ����λ����: \n");
	scanf("%d", &number);
	while (1)
	{
		takeOutEachBit(number, digit);
		bubbleSort(digit);
		number = newNumber(digit);
		flag = isFourBitNumber(number);
		/*---����λ�����ҵ���6147---*/
		if (flag == 1 && number == 6174)
		{
			printf("�����п��������!\n");
			break;
		}
	}
	system("pause");
	return 0;
}