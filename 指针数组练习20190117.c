/*
**	Á·Ï°1
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

int main()
{
	char* c[] = {
		"enter",
		"new",
		"point",
		"first"
	};
	char** cp[] = {
		c + 3,
		c + 2,
		c + 1,
		c
	};
	char*** cpp = cp;
	printf("%s\n", **++cpp);
	printf("%s\n", *--*++cpp + 3);
	printf("%s\n", *cpp[-2] + 3);
	printf("%s\n", cpp[-1][-1] + 1);
	system("pause");
	return 0;
}