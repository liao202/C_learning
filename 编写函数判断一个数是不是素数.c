/*
** 2018_11_03
** C����
** ��д�����ж�һ�����ǲ�������
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"
#include "math.h"

void is_prime_number(int n)
{
	int k = sqrt((double)n);
	int j = 0;
	for (j = 2; j <= k; j++)
	{
		if (n % j == 0)
		{
			printf("%d��������!\n", n);
			break;
		}
	}
	if (j >= k + 1)
		printf("%d������!\n", n);
}

int main()
{
	int n = 0;
	printf("������һ����: \n");
	scanf("%d", &n);
	is_prime_number(n);
	system("pause");
	return 0;
}