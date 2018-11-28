/*
**	建立一个有三个学生数据的单向动态链表
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

#define LEN sizeof(struct Student)

struct Student
{
	int num;
	double score;
	struct Student* next;
};

typedef struct Student Student;

int n;

Student* creat(void)
{
	Student* head;
	Student* p1;
	Student* p2;
	n = 0;
	p1 = p2 = (Student*)malloc(LEN);
	/*---输入第一个学生的学号和成绩---*/
	scanf("%d %lf", &p1->num, &p1->score);
	head = NULL;
	while (p1->num != 0)
	{
		n = n + 1;
		if (n == 1)
		{
			head = p1;
		}
		else
		{
			p2->next = p1;
		}
		p2 = p1;
		/*---开辟动态存储区,将起始地址赋给p1---*/
		p1 = (Student*)malloc(LEN);
		scanf("%d %lf", &p1->num, &p1->score);
	}
	p2->next = NULL;
	/*---函数返回链表第一接点地址---*/
	return head;
}

int main()
{
	Student* pt;
	pt = creat();
	/*---输出第一结点的成员值---*/
	printf("%d, %5.1f\n",
		pt->num, pt->score);
	system("pause");
	return 0;
}