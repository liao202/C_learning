#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int myStrlen1(const char* str)
{
	assert(str != NULL);
	int ret = 0;

	while (*(str + ret) != '\0')
	{
		++ret;
	}

	return ret;
}

int myStrlen2(const char* str)
{
	if (*(str) == '\0')
	{
		return 0;
	}
	return myStrlen2(++str) + 1;
}

int main()
{
	char str[] = "hello, world!";
	int len1 = 0;
	int len2 = 0;

	len1 = myStrlen1(str);
	len2 = myStrlen2(str);
	printf("%d\n", len1);
	printf("%d\n", len2);

	system("pause");
	return 0;
}