/*
**	5λ�˶�Ա�μ���10��̨��ˮ����������������Ԥ��������
**	Aѡ��˵��B�ڶ����ҵ���
**	Bѡ��˵���ҵڶ���E����
**	Cѡ��˵���ҵ�һ��D�ڶ�
**	Dѡ��˵��C����ҵ���
**	Eѡ��˵���ҵ��ģ�A��һ
**	����������ÿλѡ�ֶ�˵����һ�룬����ȷ�����������Ρ�
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

int main()
{
	int player_a = 0;
	int player_b = 0;
	int player_c = 0;
	int player_d = 0;
	int player_e = 0;
	for (player_a = 1; player_a <= 5; ++player_a)
	{
		for (player_b = 1; player_b <= 5; ++player_b)
		{
			for (player_c = 1; player_c <= 5; ++player_c)
			{
				for (player_d = 1; player_d <= 5; ++player_d)
				{
					for (player_e = 1; player_e <= 5; ++player_e)
					{
						if (((player_a == 3) + (player_b == 2) == 1) &&
							((player_b == 2) + (player_e == 4) == 1) &&
							((player_c == 1) + (player_d == 2) == 1) &&
							((player_d == 3) + (player_c == 5) == 1) &&
							((player_a == 1) + (player_e == 4) == 1) &&
							((player_a == 1) + (player_e == 4) == 1))
						{
							if ((player_a != player_b) &&
								(player_a != player_c) &&
								(player_a != player_d) &&
								(player_a != player_e) &&
								(player_b != player_c) &&
								(player_b != player_d) &&
								(player_b != player_e) &&
								(player_c != player_d) &&
								(player_c != player_e) &&
								(player_d != player_e)
									)
							{
								printf("The result is: player_a: %d, player_b: %d,"
									"player_c: %d, player_d: %d, player_e: %d\n",
									player_a, player_b, player_c, player_d, player_e);
							}
						}
					}
				}
			}
		}
	}
	system("pause");
	return 0;
}