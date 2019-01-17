/*
**	strchr��ģ��ʵ��
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"
#include "assert.h"
#include "string.h"

#define LEN 1024

//�ַ����в����ַ�
const char* myStrchr(const char* dest, char target)
{
	assert(dest != NULL);
	int len = strlen(dest);
	if (len == 0)
	{
		return NULL;
	}
	const char* ret_ptr = dest;
	while (*ret_ptr != '\0')
	{
		if (*ret_ptr == target)
		{
			return ret_ptr;
		}
		else
		{
			++ret_ptr;
		}
	}
	if (*ret_ptr == target)
	{
		return ret_ptr;
	}
	return NULL;
}

int main()
{
	char str[LEN] = "hello, world!";
	const char* p = NULL;
	p = myStrchr(str, 'w');
	printf("�����ӡ����: %s\n", p);
	system("pause");
	return 0;
}