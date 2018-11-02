/*
** 2018_11_2
** bite_c_5_1
** 猜数字游戏
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"
#include "time.h"

void game_guss_the_number()
{
	int num;
	// 初始化随机数，time(0)为时间戳
	srand((unsigned int)time(0));
	int result = rand() % 100 + 1;
	while (1)
	{
		printf("请输入您的答案:\n");
		scanf("%d", &num);
		if (num > result)
		{
			printf("您的答案过大！\n");
		}
		else if (num < result)
		{
			printf("您的答案过小！\n");
		}
		else
		{
			printf("恭喜您，猜对了！\n");
			break;
		}
	}
}

int main()
{
	int num;
	while (1)
	{
		printf("是否开始猜数字游戏，数字范围1~100。开始请按1，结束请按0: \n");
		scanf("%d", &num);
		if (num == 1)
		{
			game_guss_the_number();
		}
		else if (num == 0)
		{
			printf("游戏结束！\n");
			break;
		}
		else
		{
			printf("输入有误，请重新输入！\n");
		}
	}
	system("pause");
	return 0;
}