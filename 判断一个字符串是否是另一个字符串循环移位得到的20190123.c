#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

#define N 20

/*	����һ
void rotateLeft(char* str)
{
	assert(str != NULL);
	int len = strlen(str);
	if (len <= 1)
	{
		return;
	}
	char temp = str[0];
	for (int i = 1; i < len; ++i)
	{
		str[i - 1] = str[i];
	}
	str[len - 1] = temp;
}

void isRotateBy(char* dest, char* src)
{
	assert(dest != NULL);
	assert(src != NULL);
	int len1 = strlen(dest);
	int len2 = strlen(src);

	if (len1 != len2)
	{
		printf("����!\n");
		return;
	}
	if (len1 == 0 || len2 == 0)
	{
		printf("����!\n");
		return;
	}
	if (len1 == len2)
	{
		for (int i = 0; i < len1; ++i)
		{
			rotateLeft(src);
			if (strcmp(src, dest) == 0)
			{
				printf("��!\n");
				return;
			}
		}
	}
	printf("����!\n");
	return;
}
*/

// ������
void isRotateBy(char* dest, char* src)
{
	assert(dest != NULL);
	assert(src != NULL);
	int len1 = strlen(dest);
	int len2 = strlen(src);
	if (len1 != len2)
	{
		printf("����!\n");
		return;
	}
	if (len1 == 0 || len2 == 0)
	{
		printf("����!\n");
		return;
	}
	strncat(src, src, len2);
	if (strstr(src, dest) != NULL)
	{
		printf("��!\n");
		return;
	}
	printf("����!\n");
}

int main()
{
	char str1[N] = "abcdefg";
	char str2[N] = "defgabc";

	isRotateBy(str2, str1);

	system("pause");
	return 0;
}