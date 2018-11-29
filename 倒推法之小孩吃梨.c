/*
**	倒推法之小孩吃梨, 小孩买了一些梨, 当即吃了一半
**	觉得不够爽, 又吃了一个, 日日如此, 到第18天, 还
**	剩一个, 问小孩原来买了多少梨
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

int main()
{
	/*---第18天剩下的梨数---*/
	int pear_count = 1;
	for (int i = 18; i > 0; --i)
	{
		pear_count = (pear_count + 1) * 2;
	}
	printf("该小孩最开始一共买了%d个梨!\n", pear_count);
	system("pause");
	return 0;
}