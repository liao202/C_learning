/*
**	自定义类型详解
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

struct S1 
{
	char c1;
	int i;
	char c2;
};

struct S2 
{
	char c1;
	char c2;
	int i;
};

struct S3 
{
	double d;
	char c;
	int i;
};

struct S4 
{
	char c1;
	struct S3 s3;
	double d;
};

struct A 
{
	int _a : 2;
	int _b : 5;
	int _c : 10;
	int _d : 30;
};

int main()
{
	printf("%d\n", sizeof(struct S1));
	printf("%d\n", sizeof(struct S2));
	printf("%d\n", sizeof(struct S3));
	printf("%d\n", sizeof(struct S4));
	printf("%d\n", sizeof(struct A));
	system("pause");
	return 0;
}