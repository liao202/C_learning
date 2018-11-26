/*
**	共用体示例,用同一个表格处理老师和学生的数据
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

/*---声明无名结构体类型---*/
struct  
{
	int num;
	char name[20];
	char sex;
	char job;
	/*---声明无名共用体类型---*/
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
		printf("请输入数据: \n");
		scanf("%d %s %c %c",
			&person[i].num, &person[i].name,
			&person[i].sex, &person[i].job);
		/*---如果是学生输入班级---*/
		if (person[i].job == 's')
		{
			scanf("%d", &person[i].category.cla);
		}
		/*---如果是老师输入职务---*/
		else if (person[i].job == 't')
		{
			scanf("%s", &person[i].category.position);
		}
		/*---否则输入错误---*/
		else
		{
			printf("input error!\n");
		}
	}
	printf("\n");
	printf("No.   name     sex job class/position\n");
	for (int i = 0; i < 2; ++i)
	{
		/*---如果是学生---*/
		if (person[i].job == 's')
		{
			printf("%-6d%-10s%-4c%-4c%-10d\n",
				person[i].num, person[i].name,
				person[i].sex, person[i].job,
				person[i].category.cla);
		}
		/*---如果是老师---*/
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