/*
**	�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4��
**	���ɷ���һ��������Ϊ4�����ɷ��Ĺ��ʡ�
**	A˵�������ҡ�
**	B˵����C��
**	C˵����D��
**	D˵��C�ں�˵
**	��֪3����˵���滰��1����˵���Ǽٻ���
**	�����������Щ��Ϣ��дһ��������ȷ������˭�����֡�
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
	/*---0��ʾ��������,1��ʾ������---*/
	for (suspect_a = 0; suspect_a < 2; ++suspect_a)
	{
		for (suspect_b = 0; suspect_b < 2; ++suspect_b)
		{
			for (suspect_c = 0; suspect_c < 2; ++suspect_c)
			{
				for (suspect_d = 0; suspect_d < 2; ++suspect_d)
				{
					/*---����˵�滰---*/
					if ((suspect_a == 0) + (suspect_c == 1) + (suspect_d == 1) + (suspect_d == 0) == 3)
					{
						/*---������ֻ��һ��Ϊ����---*/
						if (suspect_a + suspect_b + suspect_c + suspect_d == 1)
						{
							if (suspect_a == 1)
							{
								printf("A������!\n");
							}
							if (suspect_b == 1)
							{
								printf("B������!\n");
							}
							if (suspect_c == 1)
							{
								printf("C������!\n");
							}
							if (suspect_d == 1)
							{
								printf("D������!\n");
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