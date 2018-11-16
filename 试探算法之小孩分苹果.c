/*
**	给五个小朋友发苹果
**	第一个小孩给二分之一的苹果再加二分之一个
**	第二个小孩给三分之一的苹果再加三分之一个
**	第五个小孩11个苹果
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
	/*---试探初值---*/
	try_number = 11;
	/*---flag = 1为试探标志, flag = 0为找到解标志---*/
	try_flag = 1;
	while (try_flag)
	{
		total_number = try_number;
		try_flag = 0;
		/*---模拟四次发苹果过程---*/
		for (int i = 1; i <= 4 && try_flag == 0; i++)
		{
			if ((try_number + 1) % (i + 1) == 0)
			{
				try_number = try_number - (try_number + 1) / (i + 1);
			}
			else
			{
				/*---小孩得到苹果不是整数---*/
				try_flag = 1;
			}
		}
		if (try_flag == 0 && try_number != 11)
		{
			/*---每次分配都得到整数个苹果,但最后剩下的苹果数不是11,还要继续试探---*/
			try_flag = 1;
		}
		/*---下一次的试探值---*/
		try_number = total_number + 1;
	}
	/*---计算每个小孩分到的苹果数---*/
	child_a = (total_number + 1) / 2;
	child_b = (total_number - child_a + 1) / 3;
	child_c = (total_number - child_a - child_b + 1) / 4;
	child_d = (total_number - child_a - child_b - child_c + 1) / 5;
	child_e = 11;
	/*---输出小孩的苹果数---*/
	printf("child_a: %d\n", child_a);
	printf("child_b: %d\n", child_b);
	printf("child_c: %d\n", child_c);
	printf("child_d: %d\n", child_d);
	printf("child_e: %d\n", child_e);
	printf("total: %d\n", total_number);
	system("pause");
	return 0;
}