/*
** 2018_11_2
** bite_c_5_1
** ��������Ϸ
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"
#include "time.h"

void game_guss_the_number()
{
	int num;
	// ��ʼ���������time(0)Ϊʱ���
	srand((unsigned int)time(0));
	int result = rand() % 100 + 1;
	while (1)
	{
		printf("���������Ĵ�:\n");
		scanf("%d", &num);
		if (num > result)
		{
			printf("���Ĵ𰸹���\n");
		}
		else if (num < result)
		{
			printf("���Ĵ𰸹�С��\n");
		}
		else
		{
			printf("��ϲ�����¶��ˣ�\n");
			break;
		}
	}
}

int main()
{
	int num;
	while (1)
	{
		printf("�Ƿ�ʼ��������Ϸ�����ַ�Χ1~100����ʼ�밴1�������밴0: \n");
		scanf("%d", &num);
		if (num == 1)
		{
			game_guss_the_number();
		}
		else if (num == 0)
		{
			printf("��Ϸ������\n");
			break;
		}
		else
		{
			printf("�����������������룡\n");
		}
	}
	system("pause");
	return 0;
}