#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void rotateLeft(char* str, int k)
{
	int len = strlen(str);
	for (int i = 0; i < k; ++i)
	{
		char temp = str[0];
		for (int j = 1; j < len; ++j)
		{
			str[j - 1] = str[j];
		}
		str[len - 1] = temp;
	}
}

int main()
{
	char str[] = "hello, world!";
	int k = 0;
	printf("������ѭ�����Ƶ�λ��: \n");
	scanf("%d", &k);
	printf("��ʼ�ַ���: %s\n", 
		str);
	rotateLeft(str, k);
	printf("ѭ������%dλ����ַ���: %s\n",
		k, str);
	system("pause");
	return 0;
}