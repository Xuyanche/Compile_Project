#ifndef Node_H
#define Node_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable : 4996)

typedef struct Node
{
	Node * brother;	
	Node * child;
	int No_Child;
	int col;
	int No_Line;
	char name[20];
	int IsBegin;
}Node;

int insert(Node* father, Node* newchild);

Node* newNode(char* node_name, int line);

void print(Node* root, int level);

#endif