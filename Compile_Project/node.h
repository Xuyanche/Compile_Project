/* Syntax Tree Node Specification file */
#ifndef NODE_H
#define NODE_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable : 4996)

typedef enum kind {
	DeclK, StmtK, ExprK // Declaration, Statement, Expression
}kind; // Kinds of nodes

typedef enum decltype {
	VarDeclT, FuncDeclT, ArrDeclT, MultiDeclT
}decltype; // Declaration node type

typedef enum stmttype {
	CompStmtT, IfT, IfElseT, IterStmtT, RetnStmtT, ExprStmtT, MultStmtT
}stmttype; // Statement node type

typedef enum exprtype {
	OpT, ConstT, IdT, AddrT, CallT, AssignT, EntryT, MultiT
}exprtype; // Expression node type

typedef union type
{
	decltype decl;
	stmttype stmt;
	exprtype expr;
}nodetype;

typedef struct attr
{
	int Op, dtype;
	int val;
	char* name;
}nodeattr;

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
	nodetype type;
	nodeattr attr;
};

/* Linked list */
typedef struct listnode listnode;
struct listnode
{
	int data;
	listnode *next;
};

/* Insert newchild as the last child of father */
int insert(STNode *father, STNode *newchild);
int makeBrother(STNode *old, STNode *newone);

STNode* newDeclNode(decltype newType);
STNode* newExprNode(exprtype newType);
STNode* newStmtNode(stmttype newType);
void refreshDeclNode(STNode *p);
void refreshExprNode(STNode *p);
void refreshStmtNode(STNode *p);
void print(STNode* node, int level);
#endif