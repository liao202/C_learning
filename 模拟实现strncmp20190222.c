#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define N 1024

int myStrncmp(const char* str1, const char* str2, size_t num)
{
	assert(str1 != NULL);
	assert(str2 != NULL);
	while (num && *str1 == *str2 && *str1 != '\0')
	{
		++str1;
		++str2;
		--num;
	}
	return *str1 - *str2;
}

int main()
{
	char str1[N] = "hello, world!";
	char str2[N] = "hello, C!";
	int flag = myStrncmp(str1, str2, 8);
	if (flag > 0)
	{
		printf("%s > %s\n", str1, str2);
	}
	else if (flag < 0)
	{
		printf("%s < %s\n", str1, str2);
	}
	else
	{
		printf("%s = %s\n", str1, str2);
	}
	system("pause");
	return 0;
}