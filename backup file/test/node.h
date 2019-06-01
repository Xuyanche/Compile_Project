#ifndef Node_H
#define Node_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable : 4996)

typedef struct Node Node;
struct Node
{
	Node * brother;	
	Node * child;
	int No_Child;
	int col;
	int No_Line;
	char name[20];
	int IsBegin;
};


void insert(Node* father, Node* newchild)
{
	if (newchild == NULL)
	{
		return;
	}
	
	if (father->No_Child == 0)
	{
		newchild->IsBegin = 1;
		father->child = newchild;
		father->No_Child++;
		return;
	}

	Node* focus = father->child;
	int i;
	for(i=0;i<father->No_Child - 1;i++)
	{
		focus = focus->brother;
	}
	
	focus->brother = newchild;
	father->No_Child++;
	return;
}



Node* newNode (char* node_name,int line, int c)
{
	struct Node *p=(struct Node*)malloc(sizeof(struct Node));
	if (p==NULL)
	{
		printf("Error:out of memory.\n");
		exit(1);
	}
    strncpy(p->name,node_name,20);
    p->brother=NULL;
    p->child=NULL;
    p->No_Line=line;
    p->No_Child=0;
    p->col= 0;
    p->IsBegin=0;
    printf("reading:%s\n",node_name );
    return p;
}

void print(Node* root, int level)
{
	int i;
	for ( i = 0; i < level; i++)
	{
		printf("__");
	}
	printf("%s\n",root->name);
	
	Node* focus = root->child;
	for (i = 0; i < root->No_Child; i++)
	{
		print(focus, level + 1);
		focus = focus->brother;
	}

	return;

}


#endif
