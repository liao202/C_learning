/*
**	�����С���ѷ�ƻ��
**	��һ��С��������֮һ��ƻ���ټӶ���֮һ��
**	�ڶ���С��������֮һ��ƻ���ټ�����֮һ��
**	�����С��11��ƻ��
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

int main()
{
	int try_number = 0;
	int try_flag = 0; 
	int total_number = 0;
	int child_a = 0; 
	int child_b = 0;
	int child_c = 0;
	int child_d = 0;
	int child_e = 0;
	/*---��̽��ֵ---*/
	try_number = 11;
	/*---flag = 1Ϊ��̽��־, flag = 0Ϊ�ҵ����־---*/
	try_flag = 1;
	while (try_flag)
	{
		total_number = try_number;
		try_flag = 0;
		/*---ģ���Ĵη�ƻ������---*/
		for (int i = 1; i <= 4 && try_flag == 0; i++)
		{
			if ((try_number + 1) % (i + 1) == 0)
			{
				try_number = try_number - (try_number + 1) / (i + 1);
			}
			else
			{
				/*---С���õ�ƻ����������---*/
				try_flag = 1;
			}
		}
		if (try_flag == 0 && try_number != 11)
		{
			/*---ÿ�η��䶼�õ�������ƻ��,�����ʣ�µ�ƻ��������11,��Ҫ������̽---*/
			try_flag = 1;
		}
		/*---��һ�ε���ֵ̽---*/
		try_number = total_number + 1;
	}
	/*---����ÿ��С���ֵ���ƻ����---*/
	child_a = (total_number + 1) / 2;
	child_b = (total_number - child_a + 1) / 3;
	child_c = (total_number - child_a - child_b + 1) / 4;
	child_d = (total_number - child_a - child_b - child_c + 1) / 5;
	child_e = 11;
	/*---���С����ƻ����---*/
	printf("child_a: %d\n", child_a);
	printf("child_b: %d\n", child_b);
	printf("child_c: %d\n", child_c);
	printf("child_d: %d\n", child_d);
	printf("child_e: %d\n", child_e);
	printf("total: %d\n", total_number);
	system("pause");
	return 0;
}