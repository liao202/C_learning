#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define N 1024

const char* myStrstr(const char* str1, const char* str2)
{
	assert(str1 != NULL);
	assert(str2 != NULL);
	while (*str1 != '\0')
	{
		const char* ret = str1;
		const char* temp1 = str1;
		const char* temp2 = str2;
		while (*temp1 != '\0' && *temp2 != '\0' && *temp1 == *temp2)
		{
			++temp1;
			++temp2;
		}
		if (*temp2 == '\0')
		{
			return ret;
		}
		++str1;
	}
	return NULL;
}

int main()
{
	char str1[N] = "hello, world!";
	char str2[N] = "world";
	printf("The str1 is: %s\n",
		str1);
	printf("The str2 is: %s\n",
		str2);
	printf("The str2 in str1 is: %s\n",
		myStrstr(str1, str2));
	system("pause");
	return 0;
}