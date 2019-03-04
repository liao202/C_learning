#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 1024

void stringReverseDisplay(const char* str)
{
	int len = strlen(str);
	int i = 0;
	for (i = len - 1; i >= 0; --i)
	{
		printf("%c", str[i]);
	}
	printf("\n");
}

int main()
{
	char str[N] = { 0 };
	printf("Please input a string: \n");
	scanf("%s", str);
	stringReverseDisplay(str);
	system("pause");
	return 0;
}