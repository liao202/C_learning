/*
**	����ʵ��ͳ�Ƽ��������һ�������еĸ��������ĸ��������
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

#define LEN sizeof(struct number)

struct number
{
	int key;
	int count;
	struct number* next;
};

typedef struct number number;

/*---������k���뵽ͷָ��Ϊhead��������---*/
number* add(int k, number* head)
{
	int flag = 1;
	number* p = head;
	/*---����k�Ƿ��Ѿ�����---*/
	while (p != NULL && flag)
	{
		if (p->key == k)
		{
			flag = 0;
		}
		else
		{
			p = p->next;
		}
	}
	/*---���Ѵ���,++count---*/
	if (flag == 0)
	{
		++p->count;
	}
	/*---��������,������뵽����ͷ---*/
	else
	{
		p = head;
		head = (number*)malloc(LEN);
		head->key = k;
		head->count = 1;
		head->next = p;
	}
	return head;
}

/*---��������������Ƶ��---*/
void display(number* p)
{
	printf("�������������Ƶ������: \n");
	while (p != NULL)
	{
		printf("%-2d%4d\n", p->key, p->count);
		p = p->next;
	}
}

int main()
{
	number* head = NULL;
	int k = 0;
	printf("����������k, ���븺������: \n");
	scanf("%d", &k);
	while (k >= 0)
	{
		head = add(k, head);
		scanf("%d", &k);
	}
	display(head);
	system("pause");
	return 0;
}