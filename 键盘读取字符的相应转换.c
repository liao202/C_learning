/*
	�Ӽ����϶�ȡ�ַ�����ΪСд��ĸת��Ϊ��д��ĸ���
	��Ϊ��д��ת��ΪСд���
	��Ϊ���ֲ����
	��Ϊ�����ַ���ԭ�����
*/

#include "stdio.h"
#include "stdlib.h"

int main()
{
	while (1)
	{
		int c = getchar();
		if (c == EOF)
		{
			break;
		}
		if (c >= 'a' && c <= 'z')
		{
			putchar(c - ('a' - 'A'));
		}
		else if (c >= 'A' && c <= 'Z')
		{
			putchar(c + ('a' - 'A'));
		}
		else
		{
			putchar(c);
		}
	}
	system("pause");
	return 0;
}