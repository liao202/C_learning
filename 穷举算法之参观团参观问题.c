/*
**	�ι��Ű���������ѡ�����ɵص�ι�
**	1.���ȥA�أ������ȥB��
**	2.D��E����ֻ��ȥһ��
**	3.C��B����ֻ��ȥһ��
**	4.C��D����Ҫô��ȥ��Ҫô����ȥ
**	5.���ȥE�أ������ȥA��D��
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
								printf("ȥA�أ�\n");
							}
							if (event_b)
							{
								printf("ȥB�أ�\n");
							}
							if (event_c)
							{
								printf("ȥC�أ�\n");
							}
							if (event_d)
							{
								printf("ȥD�أ�\n");
							}
							if (event_e)
							{
								printf("ȥE�أ�\n");
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