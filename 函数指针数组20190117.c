/*
**	����ָ������
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

int add(int x, int y)
{
	return x + y;
}

int sub(int x, int y)
{
	return x - y;
}

int mul(int x, int y)
{
	return x * y;
}

int div1(int x, int y)
{
	return x / y;
}

int main()
{
	int x = 0;
	int y = 0;
	int input = 1;
	int ret = 0;
	/*while (input)
	{
		printf("************************\n");
		printf("1: add		2: sub	\n");
		printf("3: mul		4: div	\n");
		printf("************************\n");
		printf("��ѡ��: ");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("���������: ");
			scanf("%d %d", &x, &y);
			ret = add(x, y);
			break;
		case 2:
			printf("���������: ");
			scanf("%d %d", &x, &y);
			ret = sub(x, y);
			break;
		case 3:
			printf("���������: ");
			scanf("%d %d", &x, &y);
			ret = mul(x, y);
			break;
		case 4:
			printf("���������: ");
			scanf("%d %d", &x, &y);
			ret = div1(x, y);
			break;
		default:
			printf("ѡ�����!\n");
			break;
		}
		printf("ret = %d\n", ret);
	}*/
	//ʹ��ָ������ʵ��
	int (*p[5])(int, int) = { 
		0, add, sub, mul, div1 
	};
	while (input)
	{
		int flag = 0;
		fflush(stdin);
		printf("************************\n");
		printf("1: add		2: sub	\n");
		printf("3: mul		4: div	\n");
		printf("************************\n");
		printf("��ѡ��: ");
		scanf("%d", &input);
		if ((input >= 1) && (input <= 4))
		{
			printf("�����������: ");
			flag = scanf("%d %d", &x, &y);
			if (flag != 2)
			{
				printf("��������!\n");
				continue;
			}
			ret = (*p[input])(x, y);
		}
		else
		{
			printf("��������!\n");
		}
		printf("%d\n", ret);
	}
	system("pause");
	return 0;
}