#ifndef NODE_H
#define NODE_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable : 4996)

typedef struct STNode STNode;
typedef struct listnode listnode;
struct STNode
{
	STNode * brother;
	STNode * child;
	STNode * father;
	int No_Child;
	int col;
	int No_Line;
	char name[20];
	int IsBegin;
};

struct listnode
{
	int data;
	listnode *next;
};

/* Insert newchild as the first child of father */
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

/* Create a new node with given node name */
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
	int i;
	STNode *father = node->father;
	listnode *tail = NULL;
	if (father)
		while (father->father)
		{
			listnode *temp = (listnode*)malloc(sizeof(listnode));
			temp->next = tail;
			temp->data = father->brother ? 1 : 0;
			tail = temp;
			father = father->father;
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
		if (node->brother)
			printf("|--");
		
		else
			printf("+--");
	}
	printf("%s\n", node->name);
	STNode* focus = node->child;
	while (focus)
	{
		print(focus, level + 1);
		focus = focus->brother;
	}
	return;
}
#endif