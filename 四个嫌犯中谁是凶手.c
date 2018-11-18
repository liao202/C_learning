/*
**	日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个
**	嫌疑犯的一个。以下为4个嫌疑犯的供词。
**	A说：不是我。
**	B说：是C。
**	C说：是D。
**	D说：C在胡说
**	已知3个人说了真话，1个人说的是假话。
**	现在请根据这些信息，写一个程序来确定到底谁是凶手。
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

int main()
{
	int suspect_a = 0;
	int suspect_b = 0;
	int suspect_c = 0;
	int suspect_d = 0;
	/*---0表示不是凶手,1表示是凶手---*/
	for (suspect_a = 0; suspect_a < 2; ++suspect_a)
	{
		for (suspect_b = 0; suspect_b < 2; ++suspect_b)
		{
			for (suspect_c = 0; suspect_c < 2; ++suspect_c)
			{
				for (suspect_d = 0; suspect_d < 2; ++suspect_d)
				{
					/*---三人说真话---*/
					if ((suspect_a == 0) + (suspect_c == 1) + (suspect_d == 1) + (suspect_d == 0) == 3)
					{
						/*---四人中只有一人为凶手---*/
						if (suspect_a + suspect_b + suspect_c + suspect_d == 1)
						{
							if (suspect_a == 1)
							{
								printf("A是凶手!\n");
							}
							if (suspect_b == 1)
							{
								printf("B是凶手!\n");
							}
							if (suspect_c == 1)
							{
								printf("C是凶手!\n");
							}
							if (suspect_d == 1)
							{
								printf("D是凶手!\n");
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