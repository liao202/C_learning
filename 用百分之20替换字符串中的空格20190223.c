#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 1024

void replaceSpace(char* str, int length)
{
	if (str == NULL || length <= 0)
	{
		return;
	}
	int origin_len = 0;
	int new_len = 0;
	int space_cnt = 0;
	while (str[origin_len] != '\0')
	{
		if (str[origin_len] == ' ')
		{
			++space_cnt;
		}
		++origin_len;
	}
	new_len = origin_len + 2 * space_cnt;
	if (new_len > length)
	{
		return;
	}
	while (new_len >= origin_len)
	{
		if (str[origin_len] == ' ')
		{
			str[new_len--] = '0';
			str[new_len--] = '2';
			str[new_len--] = '%';
			--origin_len;
		}
		else
		{
			str[new_len--] = str[origin_len--];
		}
	}
}

int main()
{
	char str[N] = "hello world Jan feb!";
	int len = strlen(str);
	printf("The origin string is: %s\n", str);
	replaceSpace(str, N);
	printf("The string after replace space is: %s\n", str);
	system("pause");
	return 0;
}