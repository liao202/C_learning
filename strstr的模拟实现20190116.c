/*
**	strstr的模拟实现
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"
#include "assert.h"

#define LEN 1024

//子串判断函数
const char* myStrstr(const char* dest, const char* src)
{
	assert(dest != NULL);
	assert(src != NULL);
	int len1 = strlen(dest);
	int len2 = strlen(src);
	if (len1 == 0 || len2 == 0)
	{
		return NULL;
	}
	const char* dest_ptr = NULL;
	const char* src_ptr = NULL;
	const char* ret_ptr = dest;
	while (*ret_ptr != '\0')
	{
		dest_ptr = ret_ptr;
		src_ptr = src;
		while (*dest_ptr != '\0' &&
		    	*src_ptr != '\0' && 
				(*dest_ptr == *src_ptr))
		{
			++dest_ptr;
			++src_ptr;
		}
		if (*src_ptr == '\0')
		{
			return ret_ptr;
		}
		++ret_ptr;
	}
	return NULL;
}

int main()
{
	char str1[LEN] = "hello, world!";
	const char* p = NULL;
	p = myStrstr(str1, "world");
	printf("%s\n", p);
	system("pause");
	return 0;
}