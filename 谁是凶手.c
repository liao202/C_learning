/*
**	四个犯罪嫌疑人的话之谁是凶手
**	A说：不是我。
**	B说：是C。
**	C说：是D。
**	D说：C在胡说
**	已知3个人说了真话，1个人说的是假话。
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

int main()
{
	char killer = 0;
	/*---遍历四种凶手的情况---*/
	for (killer = 'A'; killer <= 'D'; ++killer)
	{
		if ((killer != 'A') + (killer == 'C') +
			(killer == 'D') + (killer != 'D') == 3)
		{
			printf("%凶手是: %c!\n", killer);
		}
	}
	system("pause");
	return 0;
}