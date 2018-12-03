/*
**	银行卡问题
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

#define M 3
#define N 4

/*
	数组的每一行表示一张银行卡
	每一行的各个元素代表不同的含义
	第一个元素为银行卡号
	第二个元素表示余额
	第三个元素表示当日实际业务次数
	第四个元素表示存取款金额
	正值表示存款, 负值表示取款
*/
int card[M][N] = { { 100101, 2000 },
{ 100102, 300 }, { 100103, 4000 } };

/*---校对输入的卡号, 若存在返回该卡号所在的行, 若不存在返回-1---*/
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
		/*---清除输入缓冲---*/
		fflush(stdin);
		printf("请输入银行卡号: \n");
		scanf("%d", &card_number);
		/*---终止当日业务---*/
		if (card_number < 0)
		{
			break;
		}
		card_number_check = cardNumberCheck(card_number);
		if (card_number_check == -1)
		{
			printf("该银行卡号不存在, 请重新输入!\n");
			continue;
		}
		/*---输入正值表示取款, 负值表示取款---*/
		printf("请输入存取款金额: \n");
		scanf("%d", &money);
		/*---存款---*/
		if (money >= 0)
		{
			card[card_number_check][1] += money;
			card[card_number_check][3] = money;
			++card[card_number_check][2];
		}
		/*---取款---*/
		if (money < 0)
		{
			/*---余额不足---*/
			if (abs(money) > card[card_number_check][1])
			{
				printf("余额不足, 不能完成本次取款业务!\n");
				continue;
			}
			else
			{
				card[card_number_check][1] += money;
				card[card_number_check][3] = money;
				++card[card_number_check][2];
			}
		}
		/*---当前正在进行业务的银行卡, 打印其相关信息---*/
		printf("卡号为: %d 的银行卡当前余额为: %d!\n",
			card[card_number_check][0],
			card[card_number_check][1]);
		printf("今日完成的业务数量为: %d!\n",
			card[card_number_check][2]);
	}
	system("pause");
	return 0;
}