#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define N 1024

char* myStrcat(char* dest, const char* src)
{
	assert(src != NULL);
	assert(dest != NULL);
	char* temp = dest;
	while (*temp != '\0')
	{
		++temp;
	}
	while (*src != '\0')
	{
		*temp = *src;
		++temp;
		++src;
	}
	*temp = '\0';
	return dest;
}

int main()
{
	char str[N] = "hello, ";
	printf("The origin string is: %s\n",
		str);
	printf("The string after strcat is: %s\n",
		myStrcat(str, "world!"));
	system("pause");
	return 0;
}