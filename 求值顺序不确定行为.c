/*
**	求值顺序不确定的未定义行为
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

int main()
{
	int result = 0;
	int i = 0;
	result = (++i) + (++i) + (++i);
	/*---经测试,VS中为9,DEV中为7---*/
	printf("%d\n", result);
	system("pause");
	return 0;
}