/*
**	printf函数返回值
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

/*
	打印结果
	4321
	printf函数返回值的问题
	首先printf("%d", n);打印数字n
	其次, 打印上述printf的返回值2
	最后打印上一行的printf的返回值1
*/
int main()
{
	int n = 43;
	printf("%d\n", printf("%d", printf("%d", n)));
	system("pause");
	return 0;
}