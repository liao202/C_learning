/*
** 2018_11_02
** bite_c_5_3
** ģ��������������
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main()
{
	char password[1024] = {0};
	int i = 0;
	printf("����������: \n");
	while (1)
	{
		i++;
		scanf("%s", password);
		if (!strcmp(password, "123abc"))
		{
			printf("��½�ɹ���\n");
			break;
		}
		else
		{
			if (i == 3)
			{
				printf("�˻��ѱ����ᣡ\n");
				break;
			}
			printf("���������������������: \n");
		}
	}
	system("pause");
	return 0;
}