/*
**	根据四人的证词判断真假,证明谁是小偷
**	A说:B没有偷，是D偷的
**	B说:我没有偷，是C偷的
**	C说:A没有偷，是B偷的
**	D说:我没有偷
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

int main()
{
	int person_a = 0;
	int person_b = 0;
	int person_c = 0;
	int person_d = 0;
	/*---小偷是1，不是0---*/
	for (person_a = 0; person_a < 2; person_a++)
	{
		for (person_b = 0; person_b < 2; person_b++)
		{
			for (person_c = 0; person_c < 2; person_c++)
			{
				for (person_d = 0; person_d < 2; person_d++)
				{
					if ((person_b + person_d == 1) &&
						(person_b + person_c == 1) &&
						(person_a + person_b == 1) &&
						(person_a + person_b + person_c + person_d == 1))
					{
						if (person_a)
						{
							printf("A是小偷！\n");
						}
						if (person_b)
						{
							printf("B是小偷！\n");
						}
						if (person_c)
						{
							printf("C是小偷！\n");
						}
						if (person_d)
						{
							printf("D是小偷！\n");
						}
					}
				}
			}
		}
	}
	system("pause");
	return 0;
}