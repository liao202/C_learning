/*
**	���п�����
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

#define M 3
#define N 4

/*
	�����ÿһ�б�ʾһ�����п�
	ÿһ�еĸ���Ԫ�ش���ͬ�ĺ���
	��һ��Ԫ��Ϊ���п���
	�ڶ���Ԫ�ر�ʾ���
	������Ԫ�ر�ʾ����ʵ��ҵ�����
	���ĸ�Ԫ�ر�ʾ��ȡ����
	��ֵ��ʾ���, ��ֵ��ʾȡ��
*/
int card[M][N] = { { 100101, 2000 },
{ 100102, 300 }, { 100103, 4000 } };

/*---У������Ŀ���, �����ڷ��ظÿ������ڵ���, �������ڷ���-1---*/
int cardNumberCheck(int card_number_check)
{
	for (int i = 0; i < M; ++i)
	{
		if (card_number_check == card[i][0])
		{
			return i;
		}
	}
	return -1;
}

int main()
{
	int card_number = 0;
	int card_number_check = 0;
	int money = 0;
	while (1)
	{
		/*---������뻺��---*/
		fflush(stdin);
		printf("���������п���: \n");
		scanf("%d", &card_number);
		/*---��ֹ����ҵ��---*/
		if (card_number < 0)
		{
			break;
		}
		card_number_check = cardNumberCheck(card_number);
		if (card_number_check == -1)
		{
			printf("�����п��Ų�����, ����������!\n");
			continue;
		}
		/*---������ֵ��ʾȡ��, ��ֵ��ʾȡ��---*/
		printf("�������ȡ����: \n");
		scanf("%d", &money);
		/*---���---*/
		if (money >= 0)
		{
			card[card_number_check][1] += money;
			card[card_number_check][3] = money;
			++card[card_number_check][2];
		}
		/*---ȡ��---*/
		if (money < 0)
		{
			/*---����---*/
			if (abs(money) > card[card_number_check][1])
			{
				printf("����, ������ɱ���ȡ��ҵ��!\n");
				continue;
			}
			else
			{
				card[card_number_check][1] += money;
				card[card_number_check][3] = money;
				++card[card_number_check][2];
			}
		}
		/*---��ǰ���ڽ���ҵ������п�, ��ӡ�������Ϣ---*/
		printf("����Ϊ: %d �����п���ǰ���Ϊ: %d!\n",
			card[card_number_check][0],
			card[card_number_check][1]);
		printf("������ɵ�ҵ������Ϊ: %d!\n",
			card[card_number_check][2]);
	}
	system("pause");
	return 0;
}