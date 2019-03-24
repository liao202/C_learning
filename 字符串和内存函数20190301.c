#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include <errno.h>
#include <ctype.h>
#include <time.h>

size_t myStrlen(const char* str)
{
	assert(str != NULL);
	size_t len = 0;
	while (*str != '\0')
	{
		++str;
		++len;
	}
	return len;
}

char* myStrcpy(char* dest, const char* src)
{
	assert(dest != NULL);
	assert(src != NULL);
	char* temp = dest;
	while (*src != '\0')
	{
		*temp = *src;
		++src;
		++temp;
	}
	*temp = '\0';
	return dest;
}

char* myStrcat(char* dest, const char* src)
{
	assert(dest != NULL);
	assert(src != NULL);
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

char* myStrncpy(char* dest, const char* src, size_t num)
{
	assert(dest != NULL);
	assert(src != NULL);
	char* temp = dest;
	while (num && *src != '\0')
	{
		*temp = *src;
		++temp;
		++src;
		--num;
	}
	*temp = '\0';
	return dest;
}

char* myStrncat(char* dest, const char* src, size_t num)
{
	assert(dest != NULL);
	assert(src != NULL);
	char* temp = dest;
	while (*temp != '\0')
	{
		++temp;
	}
	while (num && *src != '\0')
	{
		*temp = *src;
		++temp;
		++src;
	}
	*temp = '\0';
	return dest;
}

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
	return *(--str1) - *(--str2);
}

char* myStrstr(const char* dest, const char* src)
{
	assert(dest != NULL);
	assert(src != NULL);
	const char* temp = dest;
	while (*temp != '\0')
	{
		const char* temp_dest = temp;
		const char* temp_src = src;
		while (*temp_dest == *temp_src && *temp_dest != '\0')
		{
			++temp_dest;
			++temp_src;
		}
		if (*temp_src == '\0')
		{
			return (char*)temp;
		}
		++temp;
	}
	return NULL;
}

int randomNumber()
{
	return 1 + rand() % (20 - 1 + 1);
}

void arrInit(int arr[], int len)
{
	int i = 0;
	for (i = 0; i < len; ++i)
	{
		arr[i] = randomNumber();
	}
}

void arrDisplay(int arr[], int len)
{
	int i = 0;
	for (i = 0; i < len; ++i)
	{
		printf("%-5d", arr[i]);
	}
	printf("\n");
}

void* myMemcpy(void* dest, const void* src, size_t num)
{
	assert(dest != NULL);
	assert(src != NULL);
	char* temp_dest = (char*)dest;
	char* temp_src = (char*)src;
	while (num)
	{
		*temp_dest = *temp_src;
		++temp_dest;
		++temp_src;
		--num;
	}
	return dest;
}

void* myMemmove(void* dest, const void* src, size_t num)
{
	assert(dest != NULL);
	assert(src != NULL);
	char* temp_dest = (char*)dest;
	char* temp_src = (char*)src;
	if (temp_dest >= temp_src && temp_dest <= temp_src + num)
	{
		temp_dest += num;
		temp_src += num;
		while (num)
		{
			*temp_dest = *temp_src;
			++temp_dest;
			++temp_src;
			--num;
		}
	}
	else
	{
		dest = myMemcpy(dest, src, num);
	}
	return dest;
}

int myMemcmp(const void* p1, const void* p2, size_t num)
{
	assert(p1 != NULL);
	assert(p2 != NULL);
	char* temp1 = (char*)p1;
	char* temp2 = (char*)p2;
	while (num && *temp1 == *temp2)
	{
		++temp1;
		++temp2;
		--num;
	}
	if (num == 0)
	{
		return 0;
	}
	return *temp1 - *temp2 - '\0';
}

int main()
{
	srand((unsigned int)time(0));

	int arr1[1] = { 0 };
	int arr2[1] = { 0 };
	arrInit(arr1, 1);
	arrInit(arr2, 1);
	printf("The array 1 is: \n");
	arrDisplay(arr1, 1);
	printf("The array 2 is: \n");
	arrDisplay(arr2, 1);
	printf("%d\n", myMemcmp(arr1, arr2, sizeof(int)));

	//int arr1[10] = { 0 };
	//int arr2[10] = { 0 };
	//arrInit(arr1, 10);
	//printf("The array1 is: \n");
	//arrDisplay(arr1, 10);
	//printf("The array2 is: \n");
	//arrDisplay(arr2, 10);
	//myMemcpy(arr2, arr1, 10 * sizeof(int));
	//myMemmove(arr2, arr1, sizeof(int) * 10);
	//printf("The array1 is: \n");
	//arrDisplay(arr1, 10);
	//printf("The array2 is: \n");
	//arrDisplay(arr2, 10);

	//printf("%d\n", isspace(' '));

	//FILE* p_file;
	//p_file = fopen("unexist.ent", "r");
	//if (p_file == NULL)
	//{
	//	printf("Error opening file unexist.ent: %s\n", 
	//		strerror(errno));
	//}

	//char str[] = "- This, -is!! a ,sample. string.";
	//char* pch;
	//printf("Splitting string \"%s\" into tokens: \n", str);
	//pch = strtok(str, " ,.-!");
	//while (pch != NULL)
	//{
	//	printf("%s ", pch);
	//	pch = strtok(NULL, " ,.-!");
	//}
	//printf("\n");

	//char str[1024] = "hello, world!";
	//printf("%s\n", myStrstr(str, "hello"));

	//int flag = myStrncmp("hello", "hello, world!", 5);
	//printf("%d\n", flag);

	//char str[1024] = "hello, world!";
	//int flag = 0;
	//printf("%lu\n", myStrlen(str));
	//printf("%s\n", myStrcpy(str, "hello, hello, world!"));
	//printf("%s\n", myStrcat(str, " hello, world!"));
	//flag = myStrcmp(str, "hello, world!");
	//if (flag > 0)
	//{
	//	printf("%s > %s\n", str, "hello, world!");
	//}
	//else if (flag < 0)
	//{
	//	printf("%s < %s\n", str, "hello, world!");
	//}
	//else
	//{
	//	printf("%s = %s\n", str, "hello, world!");
	//}
	//printf("%s\n", myStrncpy(str, "hello, world!", 5));
	//printf("%s\n", myStrncat(str, ", world!", 8));
	//flag = myStrncmp(str, "hello", 4);
	//if (flag > 0)
	//{
	//	printf("%s > %s\n", str, "hello, world!");
	//}
	//else if (flag < 0)
	//{
	//	printf("%s < %s\n", str, "hello, world!");
	//}
	//else
	//{
	//	printf("%s = %s\n", str, "hello, world!");
	//}
	system("pause");
	return 0;
}