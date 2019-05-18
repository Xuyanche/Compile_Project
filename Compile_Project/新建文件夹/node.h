#ifndef Node_H
#define Node_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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



Node* newNode (char* node_name,int line)
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
    printf("reading:%s",node_name );
    return p;
}

void print(Node* root, int level)
{
	Node* tmp;
	Node* Child;
	Node* Brother;
	int i = 0;
EnQueue(que, root);
	root->IsBegin=1;
while(!IsEmpty(que))
	{
		DeQueue(que, &tmp);
		fprintf(stream,"\n");
		for(i = 0; i < tmp->col ;i++)
			fprintf(stream,"%-10s", " ");
		fprintf(stream,"%-1s",tmp->name);
		fprintf(stream," ");
		Child=tmp->child;
		Brother=tmp->brother;
		if(Brother!=NULL)
		{
			Brother->col=tmp->col;
			EnQueue(que,Brother);
		}
		if(Child!=NULL)
		{
			Child->col=tmp->col+1;
			EnQueue(que,Child);
		}
	}

}


typedef Node* Item;
typedef struct node* Qnode;
typedef struct node
{
   Item data;
   Qnode next;
}Pnode;
typedef struct
{
	Qnode front;
	int  length;
}queue;
 
//新建队列
queue *NewQueue()
{
	queue *p=(queue *)malloc(sizeof(queue));
	if (p==NULL)
	{
		printf("Error:out of memory.\n");
		return p;
	}
	else
		{p->front=NULL;
		 p->length=0;
		 return p;
		}
}
//查看队列是否为空
int IsEmpty(queue *p)
{
	if(p->length==0)
		return 1;
	else
		return 0;
}
//进栈
void EnQueue(queue *list,Item item)
{  
   Qnode p=(Qnode)malloc(sizeof(Pnode));
   if(p==NULL)
   {
   	printf("Error:empty node.\n");
   	return;
   }
   else
   { 
   	 p->data=item;
   	 if(IsEmpty(list))
     	p->next=NULL;
     else
        p->next=list->front;
    list->length++;
    list->front=p;
    }
 }
 //出栈
 void DeQueue(queue *list,Item *pitem)
 {  
 	Qnode tmp=list->front;
 	if(IsEmpty(list))
 	{
 		printf("Error:empty list.\n");
    return;
 	}
 	else
 	{
 		if(pitem!=NULL)
 			*pitem=tmp->data;
 		list->front=tmp->next;
 		list->length--;
 		free(tmp);
 		if(list->length==0)
 			list->front=NULL;
 	}
 
 }




#endif
