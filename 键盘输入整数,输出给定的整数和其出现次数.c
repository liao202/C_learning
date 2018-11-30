/*
**	链表实现统计键盘输入的一串数据中的给定整数的个数并输出
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

/*---将整数k插入到头指针为head的链表中---*/
number* add(int k, number* head)
{
	int flag = 1;
	number* p = head;
	/*---查找k是否已经存在---*/
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
	/*---若已存在,++count---*/
	if (flag == 0)
	{
		++p->count;
	}
	/*---若不存在,将其插入到链表头---*/
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

/*---输出整数及其出现频率---*/
void display(number* p)
{
	printf("各整数及其出现频次如下: \n");
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
	printf("请输入整数k, 输入负数结束: \n");
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