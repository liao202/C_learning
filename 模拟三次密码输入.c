/*
** 2018_11_02
** bite_c_5_3
** 模拟三次密码输入
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main()
{
	char password[1024] = {0};
	int i = 0;
	printf("请输入密码: \n");
	while (1)
	{
		i++;
		scanf("%s", password);
		if (!strcmp(password, "123abc"))
		{
			printf("登陆成功！\n");
			break;
		}
		else
		{
			if (i == 3)
			{
				printf("账户已被冻结！\n");
				break;
			}
			printf("密码输入错误，请重新输入: \n");
		}
	}
	system("pause");
	return 0;
}