/*
**	建立一个简单的静态链表
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

struct student
{
	int num;
	double score;
	struct student* next;
};

typedef struct student student;

int main()
{
	/*---定义三个结构体---*/
	student a, b, c, *head, *p;
	a.num = 10101;
	a.score = 89.5;
	b.num = 10102;
	b.score = 90;
	c.num = 10103;
	c.score = 85;
	head = &a;
	a.next = &b;
	b.next = &c;
	c.next = NULL;
	p = head;
	do 
	{
		printf("%ld %5.1f\n",
			p->num, p->score);
		p = p->next;
	} while (p != NULL);
	system("pause");
	return 0;
}