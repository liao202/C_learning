/*
**	二级指针传参
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

void test(int** p)
{
	printf("num = %d\n", **p);
}

void test2(char** p)
{

}

int main()
{
	int n = 10;
	int* p = &n;
	int** pp = &p;
	test(pp);
	test(&p);

	char c = 'b';
	char* pc = &c;
	char** ppc = &pc;
	char* arr[10];
	test2(&pc);
	test2(ppc);
	test2(arr);
	system("pause");
	return 0;
}