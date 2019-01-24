#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int myStrlen(char* str)
{
	assert(str != NULL);
	int ret = 0;

	while (*(str + ret) != '\0')
	{
		++ret;
	}

	return ret;
}

void reverseString(char* str)
{
	assert(str != NULL);
	int string_length = myStrlen(str);

	if (string_length > 1)
	{
		char temp = str[0];
		str[0] = str[string_length - 1];
		str[string_length - 1] = '\0';
		reverseString(str + 1);
		str[string_length - 1] = temp;
	}
	return;
}

int main()
{
	char str[] = "hello, world!";
	printf("原字符串打印如下: %s\n", str);
	reverseString(str);
	printf("逆置后的字符串打印如下: %s\n", str);
	system("pause");
	return 0;
}