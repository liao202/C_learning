/*
**	ͳ�ƶ��ѧ���Ķ��ſγɼ�
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
	/*---���ƽ����---*/
	double max_average = 0;
	/*---��߷ֵ����---*/
	int max_index = 0;
	/*---ʮ��ѧ�����ݵ�����---*/
	for (int i = 0; i < 10; ++i)
	{
		printf("������No.%dѧ��������: \n", i + 1);
		printf("�������ѧ����ѧ��: \n");
		scanf("%d", &stu[i].num);
		printf("�������ѧ��������: \n");
		scanf("%s", &stu[i].name);
		printf("�������ѧ�������ſγɼ�: \n");
		scanf("%lf %lf %lf", &stu[i].score[0],
			&stu[i].score[1], &stu[i].score[2]);
	}
	/*---��ÿ��ѧ����ƽ���ɼ�,�ҳ���߷�---*/
	for (int i = 0; i < 10; ++i)
	{
		double sum = 0;
		double average = 0;
		/*---��ÿ��ѧ����ƽ����---*/
		for (int j = 0; j < 3; ++j)
		{
			sum += stu[i].score[j];
		}
		average = sum / 3;
		/*---����߷�---*/
		if (average > max_average)
		{
			max_average = average;
			max_index = i;
		}
	}
	printf("ƽ������ߵ���No.%dλͬѧ!\n", max_index + 1);
	printf("��ѧ������Ϣ����: \n");
	printf("ѧ��: %d\n����: %s\n", 
		stu[max_index].num, stu[max_index].name);
	printf("���ſγɼ�: ");
	for (int i = 0; i < 3; ++i)
	{
		printf("%f ", stu[max_index].score[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}