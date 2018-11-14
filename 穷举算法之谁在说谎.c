/*
**	判断三个人说的话，指出谁在说谎
**	甲说:乙在说谎。
**	乙说:丙在说谎
**	丙说:甲和乙都在说谎
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

int main()
{
	/*---说谎为1，未说谎为0---*/
	int person_a = 0;
	int person_b = 0;
	int person_c = 0;
	for (person_a = 0; person_a < 2; person_a++)
	{
		for (person_b = 0; person_b < 2; person_b++)
		{
			for (person_c = 0; person_c < 2; person_c++)
			{
				if ((person_a && !person_b || !person_a && person_b) &&
					(person_b && !person_c || !person_b && person_c) &&
					//(person_c && person_a == 1 && person_b = 1 ||
					 !person_c && person_a == 0 && person_b == 0))
				{
					if (person_a)
					{
						printf("甲在说谎!\n");
					}
					if (person_b)
					{
						printf("乙在说谎!\n");
					}
					if (person_c)
					{
						printf("丙在说谎!\n");
					}
				}
			}
		}
	}
	system("pause");
	return 0;
}