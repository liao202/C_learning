/*
**	��б��0�Ĵ�ӡ
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

int main()
{
	char temp = '\0';
	printf("�ַ���������\0�ͻ�ֹͣ! \n");
	printf("\n");
	printf("��\\0���ַ���ӡ: \n");
	printf("%c\n", temp);
	printf("��\\0���ַ�����ӡ: \n");
	printf("%s\n", temp);
	printf("��\\0��������ӡ: \n");
	printf("%d\n", temp);
	system("pause");
	return 0;
}