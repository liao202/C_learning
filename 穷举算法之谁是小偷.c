/*
**	�������˵�֤���ж����,֤��˭��С͵
**	A˵:Bû��͵����D͵��
**	B˵:��û��͵����C͵��
**	C˵:Aû��͵����B͵��
**	D˵:��û��͵
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
	/*---С͵��1������0---*/
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
							printf("A��С͵��\n");
						}
						if (person_b)
						{
							printf("B��С͵��\n");
						}
						if (person_c)
						{
							printf("C��С͵��\n");
						}
						if (person_d)
						{
							printf("D��С͵��\n");
						}
					}
				}
			}
		}
	}
	system("pause");
	return 0;
}