/*
**	���һ��������ÿһλ
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

int main()
{
	int number = 0;
	printf("please input the number: \n");
	scanf("%d", &number);
	printf("һ��������ÿһλ,�ɵ�λ����λ: \n");
	while (number)
	{
		printf("%d ", number % 10);
		number /= 10;
	}
	printf("\n");
	system("pause");
	return 0;
}