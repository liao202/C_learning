/*
**	�Ӽ���������ʮ��������, ����ת��Ϊʮ���������
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

#define LEN 50

/*---ʮ������תʮ����---*/
int hexToDecimal(char hex[])
{
	int ret = 0;
	for (int i = 0; hex[i] != '\0'; ++i)
	{
		if (hex[i] >= '0' && hex[i] <= '9')
		{
			ret = ret * 16 + hex[i] - '0';
		}
		if (hex[i] >= 'a' && hex[i] <= 'f')
		{
			ret = ret * 16 + hex[i] - 'a' + 10;
		}
		if (hex[i] >= 'A' && hex[i] <= 'Z')
		{
			ret = ret * 16 + hex[i] - 'A' + 10;
		}
	}
	return ret;
}

int main()
{
	char hex[LEN] = { 0 };
	char c = 0;
	int i = 0;
	int end_flag = 1;
	int flag = 0;
	printf("������һ��ʮ��������: \n");
	while (((c = getchar()) != '\0' && i < LEN && end_flag == 1))
	{
		/*---�����������ݺϷ�---*/
		if (c >= '0' && c <= '9' ||
			c >= 'a' && c <= 'f' ||
			c >= 'A' && c <= 'F')
		{
			flag = 1;
			hex[i] = c;
			++i;
		}
		/*---���벻�Ϸ�, ��ʼת��---*/
		else if (flag == 1)
		{
			hex[i] = '\0';
			printf("��ʮ�����Ƶ�ʮ������ʽΪ: %d\n", hexToDecimal(hex));
			printf("�Ƿ����?����N��n����\n");
			c = getchar();
			if (c == 'N' || c == 'n')
			{
				end_flag = 0;
			}
			else
			{
				flag = 0;
				i = 0;
				printf("������һ��ʮ��������: \n");
			}
		}
	}
	system("pause");
	return 0;
}