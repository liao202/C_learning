/*
**	�ж�һ�����ǲ�������
**	����: һ����������֮��ǡ�õ���������
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

/*---�����ж�---*/
int isPerfectNumber(int n)
{
	int sum = 0;
	/*---ͳ��n�����Ӻ�---*/
	for (int i = 1; i <= n / 2; ++i)
	{
		if (n % i == 0)
		{
			sum += i;
		}
	}
	/*---�ж����Ӻ��Ƿ����������---*/
	if (sum == n)
	{
		return 1;
	}
	return 0;
}

int main()
{
	int number = 0; 
	int perfect_number_flag = 0;
	printf("������һ������: \n");
	scanf("%d", &number);
	perfect_number_flag = isPerfectNumber(number);
	if (perfect_number_flag == 1)
	{
		printf("%d������!\n", number);
	}
	else
	{
		printf("%d��������!\n", number);
	}
	system("pause");
	return 0;
}