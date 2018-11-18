/*
**	验证计算机是大端序还是小端序
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

int main()
{
	int a = 10;
	char* p = &a;
	/*
		低位存放在高地址为大端序
		低位存放在低地址为小端序
	*/
	/*---这里打印存放a的低地址---*/
	/*---结果为10,说明是小端序---*/
	/*---结果为0, 说明是大端序---*/
	printf("%d\n", *p);
	system("pause");
	return 0;
}