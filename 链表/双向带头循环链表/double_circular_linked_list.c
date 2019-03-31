#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "double_circular_linked_list.h"

void dcllInit(Node** head)
{
	assert(head != NULL);
	(*head)->next = *head;
	(*head)->prev = *head;
}

void dcllDestory(Node** head)
{
	assert(head != NULL);
	while (*head != (*head)->next)
	{
		Node* temp = *head;
		*head = (*head)->next;
		free(temp);
		temp = NULL;
	}
	free(*head);
	*head = NULL;
}

static Node* createNode(ElementType v)
{
	Node* node = (Node*)malloc(sizeof(Node));
	assert(node != NULL);
	node->value = v;
	return node;
}

void dcllPushFront(Node** head, ElementType v)
{
	assert(head != NULL);
	Node* node = createNode(v);
	node->next = (*head)->next;
	node->prev = *head;
	(*head)->next->prev = node;
	(*head)->next = node;
}

void dcllPopFront(Node** head)
{
	assert(head != NULL);
	Node* temp = (*head)->next;
	(*head)->next->next->prev = *head;
	(*head)->next = (*head)->next->next;
	free(temp);
	temp = NULL;
}

void dcllPushBack(Node** head, ElementType v)
{
	assert(head != NULL);
	Node* node = createNode(v);
	node->next = *head;
	node->prev = (*head)->prev;
	(*head)->prev->next = node;
	(*head)->prev = node;
}

void dcllPopBack(Node** head)
{
	assert(head != NULL);
	Node* temp = (*head)->prev;
	(*head)->prev->prev->next = *head;
	(*head)->prev = (*head)->prev->prev;
}

const Node* dcllFind(const Node** head, ElementType v)
{
	assert(head != NULL);
	const Node* i = NULL;
	for (i = (*head)->next; i != *head; i = i->next)
	{
		if (i->value == v)
		{
			return i;
		}
	}
	return NULL;
}

void dcllInsertBefore(Node* pos, ElementType v)
{
	if (pos == NULL)
	{
		return;
	}
	Node* node = createNode(v);
	node->next = pos;
	node->prev = pos->prev;
	pos->prev->next = node;
	pos->prev = node;
}

void dcllErase(Node* pos)
{
	if (pos == NULL)
	{
		return;
	}
	pos->next->prev = pos->prev;
	pos->prev->next = pos->next;
	free(pos);
	pos = NULL;
}

void dcllRemove(Node** head, ElementType v)
{
	assert(head != NULL);
	Node* i = NULL;
	for (i = (*head)->next; i != *head; i = i->next)
	{
		if (i->value == v)
		{
			i->next->prev = i->prev;
			i->prev->next = i->next;
			free(i);
			i = NULL;
			return;
		}
	}
}

void dcllRemoveAll(Node** head, ElementType v)
{
	assert(head != NULL);
	Node* cur = (*head)->next;
	while (cur != *head)
	{
		if (cur->value == v)
		{
			Node* temp = cur->next;
			cur->next->prev = cur->prev;
			cur->prev->next = cur->next;
			free(cur);
			cur = temp;
		}
		else
		{
			cur = cur->next;
		}
	}
}

void dcllDisplay(const Node** head)
{
	assert(head != NULL);
	const Node* i = NULL;
	printf("The Double Circular Linked List is below: \n");
	for (i = (*head)->next; i != *head; i = i->next)
	{
		printf("%d ", i->value);
	}
	printf("\n");
}