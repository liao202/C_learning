/*
**	��������֮��λ����ļ��ܽ���
**	���ܹ�������
**	��ÿһλ��5ģ10, �������滻
**	������һλ�����һλ, �ڶ�λ�͵����ڶ�λ..
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"
#include "time.h"

#define LEN 100

/*---����---*/
void encrypt(int number[LEN])
{
	/*---��5ģ10, ��������---*/
	for (int i = 0; i < LEN; ++i)
	{
		number[i] = (number[i] + 5) % 10;
	}
	/*---����, ��һλ�����һλ, �ڶ�λ�͵����ڶ�λ..---*/
	for (int i = 0; i < LEN / 2; ++i)
	{
		int temp = 0; 
		temp = number[i];
		number[i] = number[LEN - i - 1];
		number[LEN - i - 1] = temp;
	}
	/*---���ܺ�Ľ����ӡ---*/
	printf("���ܺ�Ľ��Ϊ: \n");
	for (int i = 0; i < LEN; ++i)
	{
		printf("%-2d", number[i]);
		if ((i + 1) % 20 == 0)
		{
			printf("\n");
		}
	}
}

/*---����---*/
void deciphering(int number[LEN])
{
	/*---����, ��һ�������һ��, �ڶ����͵����ڶ���..---*/
	for (int i = 0; i < LEN / 2; ++i)
	{
		int temp = 0; 
		temp = number[i];
		number[i] = number[LEN - i - 1];
		number[LEN - i - 1] = temp;
	}
	/*---����, ��ÿһλ, ���ڻ����5, -= 5, С��5, += 5---*/
	for (int i = 0; i < LEN; ++i)
	{
		if (number[i] >= 5)
		{
			number[i] -= 5;
		}
		else if (number[i] < 5)
		{
			number[i] += 5;
		}
	}
	/*---���ܺ�Ľ����ӡ---*/
	printf("���ܺ�Ľ��Ϊ: \n");
	for (int i = 0; i < LEN; ++i)
	{
		printf("%-2d", number[i]);
		if ((i + 1) % 20 == 0)
		{
			printf("\n");
		}
	}
	printf("\n");
}

int main()
{
	/*---�������---*/
	srand((unsigned int)time(0));
	int number[LEN] = { 0 };
	/*---�������100������������---*/
	for (int i = 0; i < LEN; ++i)
	{
		/*---����0~9�������---*/
		number[i] = 0 + rand() % (9 - 0 + 1);
	}
	printf("����ǰ������: \n");
	for (int i = 0; i < LEN; ++i)
	{
		printf("%-2d", number[i]);
		if ((i + 1) % 20 == 0)
		{
			printf("\n");
		}
	}
	encrypt(number);
	deciphering(number);
	system("pause");
	return 0;
}