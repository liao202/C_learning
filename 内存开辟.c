/*
**	�ڴ濪��
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
	printf("�����: %p\n", test);
	printf("���ݶ�: %p\n", &global);
	printf("��: %p\n", ptr);
	printf("ջ: %p\n", &local);
	test();
	system("pause");
	return 0;
}