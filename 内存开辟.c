/*
**	内存开辟
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

void test()
{
	
}

int global = 20;

int main()
{
	int* ptr = (int*)malloc(4);
	int local = 30;
	printf("代码段: %p\n", test);
	printf("数据段: %p\n", &global);
	printf("堆: %p\n", ptr);
	printf("栈: %p\n", &local);
	test();
	system("pause");
	return 0;
}