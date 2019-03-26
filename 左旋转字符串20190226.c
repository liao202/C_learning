#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void leftRotateOne(char* s)
{
	if (s == NULL)
	{
		return;
	}
	int i = 0;
	int len = strlen(s);
	char temp = s[0];
	for (i = 0; i < len - 1; ++i)
	{
		s[i] = s[i + 1];
	}
	s[len - 1] = temp;
}

char* leftRotateString(char* s, int k)
{
	if (s == NULL || k < 0)
	{
		return NULL;
	}
	if (k == 0)
	{
		return s;
	}
	int i = 0;
	for (i = 0; i < k; ++i)
	{
		leftRotateOne(s);
	}
	return s;
}

int main()
{
	int k = 0;
	char str[1024] = "hello, world!";
	printf("Please input k: \n");
	scanf("%d", &k);
	printf("The original string is: %s\n", str);
	printf("The string after rol is: %s\n",
		leftRotateString(str, k));
	system("pause");
	return 0;
}