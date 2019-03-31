#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "single_linked_list.h"

void sLLInit(Node** first)
{
	assert(first != NULL);
	*first = NULL;
}

void sLLDestory(Node** first)
{
	assert(first != NULL);
	while (*first != NULL)
	{
		Node* temp = *first;
		*first = (*first)->next;
		free(temp);
		temp = NULL;
	}
}

static Node* createNode(ElementType v)
{
	Node* node = (Node*)malloc(sizeof(Node));
	node->value = v;
	return node;
}

void sLLPushFront(Node** first, ElementType v)
{
	assert(first != NULL);
	Node* node = createNode(v);
	node->next = *first;
	*first = node;
}

void sLLPopFront(Node** first)
{
	assert(first != NULL);
	Node* temp = *first;
	*first = (*first)->next;
	free(temp);
	temp = NULL;
}

void sLLPushBack(Node** first, ElementType v)
{
	assert(first != NULL);
	if (*first == NULL)
	{
		return;
	}
	Node* cur = *first;
	while (cur->next != NULL)
	{
		cur = cur->next;	
	}
	Node* node = createNode(v);
	node->next = NULL;
	cur->next = node;
}

void sLLPopBack(Node** first)
{
	assert(first != NULL);
	if (*first == NULL)
	{
		return;
	}
	if ((*first)->next == NULL)
	{
		free(*first);
		*first = NULL;
	}
	Node* cur = *first;
	while (cur->next->next != NULL)
	{
		cur = cur->next;
	}
	Node* temp = cur->next;
	cur->next = NULL;
	free(temp);
	temp = NULL;
}

const Node* sLLFind(const Node** first, ElementType v)
{
	assert(first != NULL);
	const Node* i = NULL;
	for (i = *first; i != NULL; i = i->next)
	{
		if (i->value == v)
		{
			return i;
		}
	}
	return i;
}

void sLLInsertAfter(Node* pos, ElementType v)
{
	if (pos == NULL)
	{
		return;
	}
	Node* node = createNode(v);
	node->next = pos->next;
	pos->next = node;
}

void sLLEraseAfter(Node* pos)
{
	if (pos == NULL || pos->next == NULL)
	{
		return;
	}
	Node* temp = pos->next;
	pos->next = pos->next->next;
	free(temp);
	temp = NULL;
}

void sLLRemove(Node** first, ElementType v)
{
	assert(first != NULL);
	if (*first == NULL)
	{
		return;
	}
	if ((*first)->value == v)
	{
		Node* temp = *first;
		*first = (*first)->next;
		free(temp);
		temp = NULL;
		return;
	}
	if ((*first)->next == NULL)
	{
		return;
	}
	Node* cur = *first;
	while (cur->next != NULL)
	{
		if (cur->next->value == v)
		{
			Node* temp = cur->next;
			cur->next = cur->next->next;
			free(temp);
			temp = NULL;
		}
	}
}

void sLLRemoveAll(Node** first, ElementType v)
{
	assert(first != NULL);
	if ((*first)->next == NULL)
	{
		if ((*first)->value == v)
		{
			free(*first);
			*first = NULL;
		}
		return;
	}
	Node* cur = *first;
	while (cur->next != NULL)
	{
		if (cur->next->value == v)
		{
			Node* temp = cur->next;
			cur->next = cur->next->next;
			free(temp);
			temp = NULL;
		}
		else
		{
			cur = cur->next;
		}
	}
	if ((*first)->value == v)
	{
		Node* temp = *first;
		*first = (*first)->next;
		free(temp);
		temp = NULL;
	}
}

void sLLDisplay(const Node** first)
{
	assert(first != NULL);
	const Node* i = NULL;
	for (i = *first; i != NULL; i = i->next)
	{
		printf("%d ", i->value);
	}
	printf("\n");
}