/*
**	��ֵ˳��ȷ����δ������Ϊ
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

int main()
{
	int result = 0;
	int i = 0;
	result = (++i) + (++i) + (++i);
	/*---������,VS��Ϊ9,DEV��Ϊ7---*/
	printf("%d\n", result);
	system("pause");
	return 0;
}