/*
**	统计多个学生的多门课成绩
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

struct student
{
	int num;
	char name[20];
	double score[3];
};

typedef struct student Student;

int main()
{
	Student stu[10];
	/*---最高平均分---*/
	double max_average = 0;
	/*---最高分的序号---*/
	int max_index = 0;
	/*---十个学生数据的输入---*/
	for (int i = 0; i < 10; ++i)
	{
		printf("请输入No.%d学生的数据: \n", i + 1);
		printf("请输入该学生的学号: \n");
		scanf("%d", &stu[i].num);
		printf("请输入该学生的姓名: \n");
		scanf("%s", &stu[i].name);
		printf("请输入该学生的三门课成绩: \n");
		scanf("%lf %lf %lf", &stu[i].score[0],
			&stu[i].score[1], &stu[i].score[2]);
	}
	/*---求每个学生的平均成绩,找出最高分---*/
	for (int i = 0; i < 10; ++i)
	{
		double sum = 0;
		double average = 0;
		/*---求每个学生的平均分---*/
		for (int j = 0; j < 3; ++j)
		{
			sum += stu[i].score[j];
		}
		average = sum / 3;
		/*---找最高分---*/
		if (average > max_average)
		{
			max_average = average;
			max_index = i;
		}
	}
	printf("平均分最高的是No.%d位同学!\n", max_index + 1);
	printf("该学生的信息如下: \n");
	printf("学号: %d\n姓名: %s\n", 
		stu[max_index].num, stu[max_index].name);
	printf("三门课成绩: ");
	for (int i = 0; i < 3; ++i)
	{
		printf("%f ", stu[max_index].score[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}