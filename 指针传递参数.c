/*
**	ָ�봫�ݲ���ֵ
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

/*---�βθı䲻��Ӱ��ʵ��---*/
void swap1(int a, int b)
{
	int temp;
	temp = a;
	a = b;
	b = a;
}

/*---����pa��pb�еĵ�ַ---*/
void swap2(int* pa, int* pb)
{
	int* temp;
	temp = pa;
	pa = pb;
	pb = pa;
}

/*---ͨ��ָ��ı�����ָ��ָ���ֵ---*/
void swap3(int* pa, int* pb)
{
	int temp;
	temp = *pa;
	*pa = *pb;
	*pb = temp;
}

int main()
{
	int a = 10;
	int b = 20;
	int* pa = &a;
	int* pb = &b;
	swap1(*pa, *pb);
	printf("a = %d, b = %d\n", *pa, *pb);
	swap2(pa, pb);
	printf("a = %d, b = %d\n", *pa, *pb);
	swap3(pa, pb);
	printf("a = %d, b = %d\n", *pa, *pb);
	system("pause");
	return 0;
}