/*
**	����ˮ, 1ƿ1Ԫ, ������ƿ��һƿ
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

//����ˮ
int sodaDrink(int money)
{
	int total = 0;
	int empty = 0;
	total = money / 1;
	empty = money / 1;
	while (empty > 1)
	{
		total += empty / 2;
		empty = empty % 2 + empty / 2;
	}
	return total;
}

int main()
{
	int money = 0;
	int total = 0;
	printf("�������Ǯ��: \n");
	scanf("%d", &money);
	total = sodaDrink(money);
	printf("%dԪǮ���Ժ�%dƿ�մ���ˮ!\n",
		money, total);
	system("pause");
	return 0;
}