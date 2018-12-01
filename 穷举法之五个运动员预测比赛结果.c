/*
**	穷举法之五个运动员预测比赛结果
*/

#define _CRT_SECURE_NO_WARNINGS

/*---五位运动员预测比赛结果---*/
/*
**	五人名次不重复
**	A选手说：B第二，我第三；	b == 2 && a != 3 || b != 2 && a == 3
**	B选手说：我第二，E第四；	b == 2 && e != 4 || b != 2 && e == 4
**	C选手说：我第一，D第二；	c == 1 && d != 2 || c != 1 && d == 2
**	D选手说：C最后，我第三；	c == 5 && d != 3 || c != 5 && d == 3
**	E选手说：我第四，A第一；	e == 4 && a != 1 || e != 4 && a == 1
*/

#include "stdio.h"
#include "stdlib.h"

int main()
{
	int palyer_a = 0;
	int palyer_b = 0;
	int palyer_c = 0;
	int palyer_d = 0;
	int palyer_e = 0;
	/*---遍历所有的情况---*/
	for (palyer_a = 1; palyer_a <= 5; ++palyer_a)
	{
		for (palyer_b = 1; palyer_b <= 5; ++palyer_b)
		{
			for (palyer_c = 1; palyer_c <= 5; ++palyer_c)
			{
				for (palyer_d = 1; palyer_d <= 5; ++palyer_d)
				{
					for (palyer_e = 1; palyer_e <= 5; ++palyer_e)
					{
						if (((palyer_a == 3) + (palyer_b == 2) == 1) &&
							((palyer_b == 2) + (palyer_e == 4) == 1) &&
							((palyer_c == 1) + (palyer_d == 2) == 1) &&
							((palyer_c == 5) + (palyer_d == 3) == 1) &&
							((palyer_e == 4) + (palyer_a == 1) == 1) &&
							  palyer_a * palyer_b * palyer_c * palyer_d * palyer_e == 120)
						{
							printf("player_a = %d, player_b = %d, player_c = %d, player_d = %d, player_e = %d\n",
								palyer_a, palyer_b, palyer_c, palyer_d, palyer_e);
						}
					}
				}
			}
		}
	}
	system("pause");
	return 0;
}