/*
** 2018_11_02
** bite_c_5_4
** һֱ���ռ����ַ�,Сд��ĸ����д���,��д��ĸ��Сд���,���ֲ���� 
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

int main()
{
	char input[1024] = { 0 };
	while (1)
	{
		printf("������һ���ַ�: \n");
		scanf("%s", input);
		if (input[0] >= 65 && input[0] <= 90)
		{
			input[0] += 32;
			printf("%s", input);
		}
		else if (input[0] >= 97 && input[0] <= 122)
		{
			input[0] -= 32;
			printf("%s", input);
		}
	}
	system("pause");
	return 0;
}