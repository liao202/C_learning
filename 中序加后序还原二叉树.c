#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include "binary_tree.h"

Node* buildTree(ElementType inorder[], ElementType postorder[], int size){
	if (size == 0){
		return NULL;
	}

	ElementType root_node = postorder[size - 1];
	int left_size = find(inorder, size, root_node);

	/*---¸ù---*/
	Node* root = (Node*)malloc(sizeof(Node));
	assert(root != NULL);
	root->value = root_node;

	/*---×ó×ÓÊ÷---*/
	root->left = buildTree(inorder, postorder, left_size);

	/*---ÓÒ×ÓÊ÷---*/
	root->right = buildTree(inorder + left_size + 1,
		postorder + left_size, size - left_size - 1);
}