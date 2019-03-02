#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(char* a, char* b)
{
	if (a == NULL || b == NULL)
	{
		return;
	}
	char temp = *a;
	*a = *b;
	*b = temp;
}

void reverseString(char* left, char* right)
{
	if (left == NULL || right == NULL)
	{
		return;
	}
	while (left < right)
	{
		swap(left, right);
		++left;
		--right;
	}
}

char* reverseSentence(char* s)
{
	if (s == NULL)
	{
		return NULL;
	}
	int len = strlen(s);
	reverseString(s, s + len - 1);
	char* start = s;
	while (*start != '\0')
	{
		char* end = start;
		while (*end != '\0' && *end != ' ')
		{
			++end;
		}
		reverseString(start, end - 1);
		start = end + 1;
		if (*start == ' ')
		{
			++start;
		}
	}
	return s;
}

int main()
{
	char str[1024] = "student. a am i";
	printf("The origin string is: %s\n", str);
	printf("The string after reverse is: %s\n",
		reverseSentence(str));
	system("pause");
	return 0;
}