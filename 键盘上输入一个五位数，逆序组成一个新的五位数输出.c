/*
**	����������һ����λ�����������һ���µ���λ���������
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

int main()
{
	int number = 0;
	printf("������һ����λ��: \n");
	while (1)
	{
		scanf("%d", &number);
		if (number >= 100000 || number < 10000)
		{
			printf("�������,����������: \n");
			continue;
		}
		else
		{
			break;
		}
	}
	number = (number / 10000) + (number / 1000 % 10) * 10 +
		(number / 100 % 10) * 100 + (number / 10 % 10) * 1000 +
		(number % 10) * 10000;
	printf("The reverse number is: %d\n", number);
	system("pause");
	return 0;
}	