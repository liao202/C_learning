#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define N 1024

size_t myStrlen(const char* str)
{
	assert(str != NULL);
	size_t len = 0;
	while (*str != '\0')
	{
		++len;
	}
	return len;
}

char* strncpy(char* dest, const char* src, size_t num)
{
	assert(dest != NULL);
	assert(src != NULL);
	char* temp = dest;
	while (num)
	{
		*temp++ = *src++;
		--num;
	}
	*temp = '\0';
	return dest;
}

int main()
{
	char str[N];
	char* p = "hello, world!";
	size_t num = myStrlen(p);
	printf("%s\n", myStrncpy(str, "hello, world!"), num);
	system("pause");
	return 0;
}