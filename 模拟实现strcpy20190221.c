#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define N 1024

char* myStrcpy(char* dest, const char* src)
{
	assert(src != NULL);
	assert(dest != NULL);
	char* temp = dest;
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
	char str[N] = { 0 };
	printf("%s\n", myStrcpy(str, "hello, world!"));
	system("pause");
	return 0;
}