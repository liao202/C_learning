/*
**	������ʾ��,��ͬһ���������ʦ��ѧ��������
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

/*---���������ṹ������---*/
struct  
{
	int num;
	char name[20];
	char sex;
	char job;
	/*---������������������---*/
	union 
	{
		int cla;
		char position[10];
	}category;
}person[2];

int main()
{
	for (int i = 0; i < 2; ++i)
	{
		printf("����������: \n");
		scanf("%d %s %c %c",
			&person[i].num, &person[i].name,
			&person[i].sex, &person[i].job);
		/*---�����ѧ������༶---*/
		if (person[i].job == 's')
		{
			scanf("%d", &person[i].category.cla);
		}
		/*---�������ʦ����ְ��---*/
		else if (person[i].job == 't')
		{
			scanf("%s", &person[i].category.position);
		}
		/*---�����������---*/
		else
		{
			printf("input error!\n");
		}
	}
	printf("\n");
	printf("No.   name     sex job class/position\n");
	for (int i = 0; i < 2; ++i)
	{
		/*---�����ѧ��---*/
		if (person[i].job == 's')
		{
			printf("%-6d%-10s%-4c%-4c%-10d\n",
				person[i].num, person[i].name,
				person[i].sex, person[i].job,
				person[i].category.cla);
		}
		/*---�������ʦ---*/
		else
		{
			printf("%-6d%-10s%-4c%-4c%-10s\n",
				person[i].num, person[i].name,
				person[i].sex, person[i].job,
				person[i].category.position);
		}
	}
	system("pause");
	return 0;
}