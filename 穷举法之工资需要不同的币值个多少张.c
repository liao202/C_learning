/*
**	��ٷ�֮������Ҫ��ͬ�ı�ֵ��������
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

int main()
{
	/*---����---*/
	int wage = 0;
	printf("�����빤��: \n");
	scanf("%d", &wage);
	printf("���п��ܽ������: \n");
	/*---��ֵΪvalue������---*/
	int value_100_number = 0;
	int value_50_number = 0;
	int value_20_number = 0;
	int value_10_number = 0;
	int value_5_number = 0;
	int value_2_number = 0;
	int value_1_number = 0;
	for (value_100_number = 0; value_100_number <= wage / 100; ++value_100_number)
	{
		for (value_50_number = 0; value_50_number <= wage / 50; ++value_50_number)
		{
			for (value_20_number = 0; value_20_number <= wage / 20; ++value_20_number)
			{
				for (value_10_number = 0; value_10_number <= wage / 10; ++value_10_number)
				{
					for (value_5_number = 0; value_5_number <= wage / 5; ++value_5_number)
					{
						for (value_2_number = 0; value_2_number <= wage / 2; ++value_2_number)
						{
							for (value_1_number = 0; value_1_number <= wage / 1; ++value_1_number)
							{
								if (value_1_number * 1 + value_2_number * 2 + value_5_number * 5 +
									value_10_number * 10 + value_20_number * 20 + value_50_number * 50 +
									value_100_number * 100 == wage)
								{
									printf("100Ԫ%2d��,  50Ԫ%2d��,  20Ԫ%2d��,  10Ԫ%2d��,   5Ԫ%2d��,"
										"2Ԫ%2d��,   1Ԫ%2d��!\n",
										value_100_number, value_50_number, value_20_number, value_10_number,
										value_5_number, value_2_number, value_1_number);
								}
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