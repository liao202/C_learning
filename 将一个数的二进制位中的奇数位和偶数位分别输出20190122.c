#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

void evenOddBitDisplay(int n)
{
	printf("����λ��ӡ����: \n");
	for (int i = 0; i < 32; i += 2)
	{
		printf("%-2d", (n >> i) & 1);
	}
	printf("\nż��λ��ӡ����: \n");
	for (int i = 1; i < 32; i += 2)
	{
		printf("%-2d", (n >> i) & 1);
	}
	printf("\n");
}

int main()
{
	int num = 0;

	printf("������һ������: \n");
	scanf("%d", &num);
	evenOddBitDisplay(num);

	system("pause");
	return 0;
}