/*
**	��������֮����
**	���ܹ�������
**	����Ϊ4λ
**	��ÿһλ������5��ģ10, �Ը�����������
**	����һλ�͵���λ, �ڶ�λ�͵���λ���н���
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

#define LEN 4

/*---����---*/
void encrypt(int number)
{
	int i = LEN - 1;
	int password[LEN] = { 0 };
	/*---�����ַ�������---*/
	while (number != 0)
	{
		password[i--] = number % 10;
		number /= 10;
	}
	/*---��ÿλ���м���---*/
	for (int i = 0; i < LEN; ++i)
	{
		password[i] = (password[i] + 5) % 10;
	}
	/*---����, ��һλ�͵���λ, �ڶ�λ�͵���λ---*/
	for (int i = 0; i < LEN / 2; ++i)
	{
		int temp = 0;
		temp = password[i];
		password[i] = password[LEN - i - 1];
		password[LEN - i - 1] = temp;
	}
	printf("���ܺ�Ľ��Ϊ: \n");
	for (int i = 0; i < LEN; ++i)
	{
		printf("%d", password[i]);
	}
	printf("\n");
}

int main()
{
	int number = 0;
	printf("��������λ����: \n");
	scanf("%d", &number);
	encrypt(number);
	system("pause");
	return 0;
}