#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "node.h"

/* Insert the newchild node as the first child of the father node */
int insert(Node* father, Node* newchild)
{
	if (!newchild && father)
		return 1;
	if (father->No_Child == 0)
		newchild->IsBegin = 1;
	Node* focus = father->child;
	newchild->brother = focus;
	father->child = newchild;
	father->No_Child++;
	return 0;
}

Node* newNode(char* node_name, int line)
{
	Node *p = (Node*)malloc(sizeof(Node));
	if (p == NULL)
	{
		printf("Error:out of memory.\n");
		exit(1);
	}
	strncpy(p->name, node_name, 20);
	p->brother = NULL;
	p->child = NULL;
	p->No_Line = line;
	p->No_Child = 0;
	p->col = 0;
	p->IsBegin = 0;
	// printf("reading:%s\n", node_name);
	return p;
}

void print(Node* root, int level)
{
	int i;
	for (i = 0; i < level; i++)
	{
		printf("__");
	}
	printf("%s\n", root->name);

	Node* focus = root->child;
	for (i = 0; i < root->No_Child; i++)
	{
		print(focus, level + 1);
		focus = focus->brother;
	}

	return;

}