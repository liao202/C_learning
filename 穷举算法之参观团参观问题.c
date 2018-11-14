/*
**	参观团按以下条件选定若干地点参观
**	1.如果去A地，则必须去B地
**	2.D和E两地只能去一地
**	3.C和B两地只能去一地
**	4.C和D两地要么都去，要么都不去
**	5.如果去E地，则必须去A和D地
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

int main()
{
	int event_a = 0;
	int event_b = 0;
	int event_c = 0;
	int event_d = 0;
	int event_e = 0;
	for (event_a = 0; event_a < 2; event_a++)
	{
		for (event_b = 0; event_b < 2; event_b++)
		{
			for (event_c = 0; event_c < 2; event_c++)
			{
				for (event_d = 0; event_d < 2; event_d++)
				{
					for (event_e = 0; event_e < 2; event_e++)
					{
						if ((event_a && event_b || !event_a) &&
							(event_d + event_e == 1) && (event_b + event_c == 1) && 
							(event_c && event_d || !event_c && !event_d) && (event_e && 
							event_a && event_d || !event_e))
						{
							if (event_a)
							{
								printf("去A地！\n");
							}
							if (event_b)
							{
								printf("去B地！\n");
							}
							if (event_c)
							{
								printf("去C地！\n");
							}
							if (event_d)
							{
								printf("去D地！\n");
							}
							if (event_e)
							{
								printf("去E地！\n");
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