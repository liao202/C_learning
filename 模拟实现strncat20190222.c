#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define N 1024

char* myStrncat(char* dest, const char* src, size_t num)
{
	assert(dest != NULL);
	assert(src != NULL);
	char* temp = dest;
	while (*temp != '\0')
	{
		++temp;
	}
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
	char str[N] = "hello, ";
	printf("%s\n", myStrncat(str, "world!", 6));
	system("pause");
	return 0;
}