/*
**	ת����Сд��ĸ
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

#define LEN 100

/*---�ַ���ת������---*/
char* toLowCase(char* str)
{
	char* temp = str;
	while (*temp != 0)
	{
		if (*temp >= 'A' && *temp <= 'Z')
		{
			*temp += 'a' - 'A';
		}
		++temp;
	}
	return str;
}

int main()
{
	char str[LEN] = { 0 };
	char* result = str;
	printf("�������ַ���: \n");
	gets(str);
	printf("ת��ǰ���ַ�����ӡ����: \n");
	puts(str);
	result = toLowCase(str);
	printf("ת������ַ�����ӡ����: \n");
	puts(result);
	system("pause");
	return 0;
}