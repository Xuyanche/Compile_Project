/* Syntax Tree Node Specification file */
#ifndef NODE_H
#define NODE_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable : 4996)

typedef enum tokentype{
	ADD,SUB,MUL,DIV,COM,ASN,LCR,RCR,LBR,RBR,LPR,RPR,SEMI,ID,NUM,INT,VOID,IF,ELSE,WHILE,RETURN,LE,LEQ,GE,GEQ,EQ,NEQ
}TokenType;

typedef enum kind {
	DeclK, StmtK, ExprK // Declaration, Statement, Expression
}kind; // Kinds of nodes

typedef enum decltype {
	VarDeclT, FuncDeclT, ArrDeclT
}decltype; // Declaration node type

typedef enum stmttype {
	CompStmtT, IfT, IfElseT, IterStmtT, RetnStmtT, ExprStmtT
}stmttype; // Statement node type

typedef enum exprtype {
	OpT, ConstT, IdT, AddrT, CallT
}exprtype; // Expression node type

typedef union type
{
	decltype decl;
	stmttype stmt;
	exprtype expr;
}type;

typedef struct attr
{
	TokenType Op, dtype;
	int val;
	char* name;
}attr;

/* Syntax tree node */
typedef struct STNode STNode;
struct STNode
{
	STNode * brother;
	STNode * child;
	STNode * father;
	int No_Line;
	char name[20];
	kind kind;
	type nodetype;
	attr nodeattr;
};

/* Linked list */
typedef struct listnode listnode;
struct listnode
{
	int data;
	listnode *next;
};

/* Insert newchild as the last child of father */
int insert(STNode *father, STNode *newchild)
{
	if (!(newchild && father))
		return 1;
	newchild->father = father;
	if (father->child == NULL)
	{
		father->child = newchild;
		return 0;
	}
	else
	{
		STNode* focus = father->child;
		while (focus->brother)
		{
			focus = focus->brother;
		}
		focus->brother = newchild;
		return 0;
	}
}

STNode* newDeclNode(decltype newType)
{
	STNode *p = (STNode*)malloc(sizeof(STNode));
	if (p == NULL)
	{
		printf("Error:out of memory.\n");
		exit(1);
	}
	p->brother = NULL;
	p->child = NULL;
	p->father = NULL;
	p->No_Line = nr_line;
	p->kind = DeclK;
	p->nodetype.decl = newType;
	switch (newType)
	{
	case VarDeclT: {
		strcpy(p->name, "VarDecl\0");
		break;
	}
	case FuncDeclT: {
		strcpy(p->name, "FuncDecl\0");
		break;
	}
	case ArrDeclT: {
		strcpy(p->name, "ArrDecl\0");
		break;
	}
	default:
		break;
	}
	return p;
}

STNode* newExprNode(exprtype newType)
{
	STNode *p = (STNode*)malloc(sizeof(STNode));
	if (p == NULL)
	{
		printf("Error:out of memory.\n");
		exit(1);
	}
	p->brother = NULL;
	p->child = NULL;
	p->father = NULL;
	p->No_Line = nr_line;
	p->kind = ExprK;
	p->nodetype.expr = newType;
	switch (newType)
	{
	case OpT: {
		strcpy(p->name, "Operator\0");
		break;
	}
	case ConstT: {
		strcpy(p->name, "Const\0");
		break;
	}
	case IdT: {
		strcpy(p->name, "Identifier\0");
		break;
	}
	case AddrT: {
		strcpy(p->name, "Address\0");
		break;
	}
	case CallT: {
		strcpy(p->name, "FuncCall\0");
		break;
	}
	default:
		break;
	}
	return p;
}

STNode* newStmtNode(stmttype newType)
{
	STNode *p = (STNode*)malloc(sizeof(STNode));
	if (p == NULL)
	{
		printf("Error:out of memory.\n");
		exit(1);
	}
	p->brother = NULL;
	p->child = NULL;
	p->father = NULL;
	p->No_Line = nr_line;
	p->kind = StmtK;
	p->nodetype.stmt = newType;
	switch (newType)
	{
	case CompStmtT: {
		strcpy(p->name, "CompoundStmt\0");
		break;
	}
	case IfT: {
		strcpy(p->name, "IfStmt\0");
		break;
	}
	case IfElseT: {
		strcpy(p->name, "IfElseStmt\0");
		break;
	}
	case IterStmtT: {
		strcpy(p->name, "LoopStmt\0");
		break;
	}
	case RetnStmtT: {
		strcpy(p->name, "Return\0");
		break;
	}
	case ExprStmtT: {
		strcpy(p->name, "Expression\0");
		break;
	}
	default:
		break;
	}
	return p;
}

void print(STNode* node, int level)
{
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

	STNode* focus = node->child;
	while (focus)
	{
		print(focus, level + 1);
		focus = focus->brother;
	}
	return;
}
#endif