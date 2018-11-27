/*
**	分离出整型的高字节和低字节
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

union union_test
{
	int number;
	char ch[4];
};

int main()
{
	union union_test data;
	scanf("%x", &data.number);
	printf("%x %x\n",
		data.ch[0], data.ch[3]);
	system("pause");
	return 0;
}