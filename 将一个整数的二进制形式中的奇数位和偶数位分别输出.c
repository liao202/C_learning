/*
**	��һ�������Ķ�������ʽ�е�����λ��ż��λ�ֱ����
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

int main()
{
	unsigned int number = 0;
	int arr[32] = { 0 };
	int i = 0;
	printf("please input the number: \n");
	scanf("%d", &number);
	while (number)
	{
		arr[i] = number % 2;
		number /= 2;
		++i;
	}
	printf("%d�Ķ�����������(�ɵ�λ����λ): \n", number);
	for (i = 0; i < 32; ++i)
	{
		printf("%d ", arr[i]);
	}
	printf("\n����λ����: \n");
	for (i = 0; i < 32; ++i)
	{
		if ((i + 1) % 2 == 1)
		{
			printf("%d ", arr[i]);
		}
	}
	printf("\nż��λ����: \n");
	for (i = 0; i < 32; ++i)
	{
		if ((i + 1) % 2 == 0)
		{
			printf("%d ", arr[i]);
		}
	}
	printf("\n");
	system("pause");
	return 0;
}