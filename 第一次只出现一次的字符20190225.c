#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int firstRepeat(char* s)
{
	if (s == NULL)
	{
		return -1;
	}
	int i = 0;
	int j = 0;
	int len = strlen(s);
	for (i = 0; i < len; ++i)
	{
		char c = s[i];
		for (j = 0; j < len; ++j)
		{
			if (i != j && c == s[j])
			{
				break;
			}
		}
		if (j == len)
		{
			return i;
		}
	}
	return -1;
}

int main()
{
	char* str = "hello world hello";
	int index = 0;
	index = firstRepeat(str);
	if (index == -1)
	{
		printf("Not Found!\n");
	}
	else
	{
		printf("The first repeat char is: %c\n", str[index]);
	}
	system("pause");
	return 0;
}