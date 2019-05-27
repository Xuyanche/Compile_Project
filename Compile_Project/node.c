#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "node.h"

/* Insert the newchild node as the first child of the father node */
int insert(STNode* father, STNode* newchild)
{
	if (!newchild && father)
		return 1;
	if (father->No_Child == 0)
		newchild->IsBegin = 1;
	newchild->father = father;
	STNode* focus = father->child;
	newchild->brother = focus;
	father->child = newchild;
	father->No_Child++;
	return 0;
}

STNode* newNode(char* node_name, int line)
{
	STNode *p = (STNode*)malloc(sizeof(STNode));
	if (p == NULL)
	{
		printf("Error:out of memory.\n");
		exit(1);
	}
	strncpy(p->name, node_name, 20);
	p->brother = NULL;
	p->child = NULL;
	p->father = NULL;
	p->No_Line = line;
	p->No_Child = 0;
	p->col = 0;
	p->IsBegin = 0;
	return p;
}

void print(STNode* node, int level)
{
	/*STNode *father = node;
	listnode *tail = NULL;
	if (father)
		while (father->father)
		{
			father = father->father;
			listnode *temp = (listnode*)malloc(sizeof(listnode));
			if (!temp)
				printf("No memory!\n");
			temp->next = tail;
			temp->data = father->brother ? 1 : 0;
			tail = temp;
		}
	while (tail)
	{
		if (tail->data)
			printf("|  ");
		else
			printf("   ");
		tail = tail->next;
	}
	if ( level > 0 ){
		printf("|--");
	}*/
	int i;
	for (i = 0; i < level; i++)
	{
		printf("__");
	}
	printf("%s\n", node->name);

	STNode* focus = node->child;
	for (i = 0; i < node->No_Child; i++)
	{
		print(focus, level + 1);
		focus = focus->brother;
	}
	return;
}