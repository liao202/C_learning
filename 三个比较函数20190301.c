#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

int myStrcmp(const char* str1, const char* str2)
{
	assert(str1 != NULL);
	assert(str2 != NULL);
	while (*str1 == *str2 && *str1 != '\0')
	{
		++str1;
		++str2;
	}
	return *str1 - *str2;
}

int myStrncmp(const char* str1, const char* str2, size_t num)
{
	assert(str1 != NULL);
	assert(str2 != NULL);
	while (num && *str1 == *str2)
	{
		++str1;
		++str2;
		--num;
	}
	if (num == 0)
	{
		return 0;
	}
	return *str1 - *str2;
}

int myMemcmp(const void* p1, const void* p2, size_t num)
{
	assert(p1 != NULL);
	assert(p1 != NULL);
	char* temp1 = (char*)p1;
	char* temp2 = (char*)p2;
	while (num && *temp1 == *temp2)
	{
		++temp1;
		++temp2;
	}
	if (num == 0)
	{
		return 0;
	}
	return *temp1 - *temp2;
}

int main()
{
	char str[] = "hello, world!";
	int arr1[] = { 21 };
	int arr2[] = { 37 };
	printf("%d\n", myStrcmp(str, "hello, world!"));
	printf("%d\n", myStrncmp(str, "hello", 5));
	printf("%d\n", myMemcmp(arr1, arr2, 4));
	printf("%d\n", memcmp(arr1, arr2, 4));
	system("pause");
	return 0;
}