/*
**	º¯ÊıÖ¸Õë
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

void test()
{
	printf("hehe\n");
}

typedef void (*TestPointer)();

int main()
{
	printf("%p\n", test);
	printf("%p\n", &test);
	TestPointer t1 = test;
	t1();
	system("pause");
	return 0;
}