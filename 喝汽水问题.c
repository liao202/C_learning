/*
**	����ˮ����
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

//����ˮ
int sodaDrink(int money)
{
	int total = 0;
	int empty = 0;
	//��ˮ����1Ԫ
	total = money / 1;
	empty = total;
	while (empty > 1)
	{
		//������ƿ���Ի�һƿ����
		total += empty / 2;
		empty = empty % 2 + empty / 2;
	}
	return total;
}

int main()
{
	int money = 0;
	int bottle = 0;
	printf("������Ǯ��: \n");
	scanf("%d", &money);
	bottle = sodaDrink(money);
	printf("%dԪ���Ժ�%dƿ��ˮ!\n",
		 money, bottle);
	system("pause");
	return 0;
}