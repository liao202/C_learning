#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "my_string.h"

size_t myStrlen(const char* str)
{
	assert(str != NULL);
	if (!*str)
	{
		return 0;
	}
	return myStrlen(++str) + 1;
}

char* myStrcpy(char* dest, const char* src)
{
	assert(dest != NULL);
	assert(src != NULL);
	char* cp = dest;
	while (*src)
	{
		*cp = *src;
		++cp;
		++src;
	}
	return dest;
}

char* myStrcat(char* dest, const char* src)
{
	assert(dest != NULL);
	assert(src != NULL);
	char* cp = dest;
	while (*cp)
	{
		++cp;
	}
	while (*src)
	{
		*cp = *src;
		++cp;
		++src;
	}
	cp = '\0';
	return dest;
}

const char* myStrstr(const char* str1, const char* str2)
{
	assert(str1 != NULL);
	assert(str2 != NULL);
	const char* cp = str1;
	const char *s1, *s2;
	if (!*str2)
	{
		return str1;
	}
	while (*cp)
	{
		s1 = cp;
		s2 = str2;
		while (*s1 && *s2 && !(*s1 - *s2))
		{
			++s1;
			++s2;
		}
		if (!*s2)
		{
			return cp;
		}
		++cp;
	}
	return NULL;
}

const char* myStrchr(const char* str, int ch)
{
	assert(str != NULL);
	while (*str && *str != (char)ch)
	{
		++str;
	}
	if (*str == (char)ch)
	{
		return str;
	}
	return NULL;
}

int myStrcmp(const char* str1, const char* str2)
{
	assert(str1 != NULL);
	assert(str2 != NULL);
	while (*str1 == *str2 && *str1)
	{
		++str1;
		++str2;
	}
	return *str1 - *str2;
}

char* myStrncpy(char* dest, const char* src, size_t num)
{
	assert(dest != NULL);
	assert(src != NULL);
	char* cp = dest;
	while (num)
	{
		*cp = *src;
		++cp;
		++src;
		--num;
	}
	return dest;
}

char* myStrncat(char* dest, const char* src, size_t num)
{
	assert(dest != NULL);
	assert(src != NULL);
	char* cp = dest;
	while (*cp)
	{
		++cp; 
	}
	while (num && *src)
	{
		*cp = *src;
		++cp;
		++src;
		--num;
	}
	*cp = '\0';
	return dest;
}

int myStrncmp(const char* str1, const char* str2, size_t num)
{
	assert(str1 != NULL);
	assert(str2 != NULL);
	while (*str1 && *str1 == *str2 && num)
	{
		--num;
		++str1;
		++str2;
	}
	return *str1 - *str2;
}

void* myMemcpy(void* dest, const void* src, size_t num)
{
	assert(dest != NULL);
	assert(src != NULL);
	char* cp = (char*)dest;
	while (num)
	{
		*cp = *(char*)src;
		--num;
	}
	return dest;
}

void* myMemmove(void* dest, const void* src, size_t num)
{
	assert(dest != NULL);
	assert(src != NULL);
	char* cp = (char*)dest;
	if (cp >= (char*)src && cp <= (char*)src + num)
	{
		size_t i = 0;
		for (i = num - 1; i >= 0; --i)
		{
			cp[i] = ((char*)src)[i];
		}
		return dest;
	}
	return myMemcpy(dest, src, num);
}