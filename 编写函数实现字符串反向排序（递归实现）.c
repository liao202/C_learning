/*
** 2018_11_07
** ��д����ʵ���ַ����ķ�������
*/

#include "stdio.h"
#include "stdlib.h"

void string_reverse(char* str)
{
	if (str[0] != '\0')
	{
		string_reverse(str + 1);
	}
	printf("%c", *(str - 1));
}

int main()
{
	char *str = "dlroWolleH";
	printf("The original string: %s\n", str);
	printf("The reverse string: ");
	string_reverse(str);
	printf("\n");
	system("pause");
	return 0;
}