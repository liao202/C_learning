#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int isLittleEnd1()
{
	int i = 1;
	return *(char*)&i;
}

int isLittleEnd2()
{
	union
	{
		int i;
		char c;
	} un;
	un.i = 1;
	return un.c;
}

int main()
{
	int flag1 = 0;
	int flag2 = 0;
	flag1 = isLittleEnd1();
	flag2 = isLittleEnd2();
	printf("flag1: %d\nflag2: %d\n",
		flag1, flag2);
	system("pause");
	return 0;
}