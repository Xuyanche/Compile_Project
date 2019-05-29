#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "node.h"

extern int nr_line;

static char* operators[25] = { "+", "-", "*", "/", ",", "=", "{", "}", "[", "]", "(", ")", ";", "int", "void", "if", "else", "while", "return", "<", "<=",
						">", ">=", "==", "!=" };

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
	p->type.decl = newType;
	return p;
}

void refreshDeclNode(STNode *p) {
	switch (p->type.decl)
	{
	case VarDeclT: {
		sprintf(p->name, "VarDecl: %s", p->attr.name);
		break;
	}
	case FuncDeclT: {
		sprintf(p->name, "FuncDecl: %s", p->attr.name);
		break;
	}
	case ArrDeclT: {
		sprintf(p->name, "ArrDecl: %s[%d]", p->attr.name, p->attr.val);
		break;
	}
	case LocalDeclT: {
		sprintf(p->name, "LocalDecl");
		break;
	}
	default:
		break;
	}
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
	p->type.expr = newType;
	return p;
}

void refreshExprNode(STNode *p) {
	switch (p->type.expr)
	{
	case OpT: {
		sprintf(p->name, "Operator: %s", operators[p->attr.Op - 258]);
		break;
	}
	case ConstT: {
		sprintf(p->name, "Const: %d", p->attr.val);
		break;
	}
	case IdT: {
		sprintf(p->name, "Identifier: %s", p->attr.name);
		break;
	}
	case AddrT: {
		sprintf(p->name, "Address: %s", p->attr.name);
		break;
	}
	case CallT: {
		sprintf(p->name, "FuncCall: %s", p->attr.name);
		break;
	}
	case AssignT: {
		sprintf(p->name, "Assign");
		break;
	}
	case EntryT: {
		sprintf(p->name, "ArrayEntry: %s", p->attr.name);
		break;
	}
	case ArgsT: {
		sprintf(p->name, "Arguments");
		break;
	}
	case ParasT: {
		sprintf(p->name, "Parameters");
		break;
	}
	default:
		break;
	}
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
	p->type.stmt = newType;
	return p;
}

void refreshStmtNode(STNode *p) {
	switch (p->type.stmt)
	{
	case ProgStmtT: {
		sprintf(p->name, "Program");
		break;
	}
	case CompStmtT: {
		sprintf(p->name, "CompoundStmt");
		break;
	}
	case IfT: {
		sprintf(p->name, "IfStmt");
		break;
	}
	case IfElseT: {
		sprintf(p->name, "IfElseStmt");
		break;
	}
	case IterStmtT: {
		sprintf(p->name, "LoopStmt");
		break;
	}
	case RetnStmtT: {
		sprintf(p->name, "Return");
		break;
	}
	case ExprStmtT: {
		sprintf(p->name, "Expression");
		break;
	}
	case StmtListT: {
		sprintf(p->name, "StmtList");
		break;
	}
	default:
		break;
	}
}

int makeBrother(STNode *old, STNode *newone) {
	STNode *node = old;
	while (node->brother)
		node = node->brother;
	node->brother = newone;
}

void print(STNode* node, int level)
{
	if (node->brother) node->brother->father = node->father;
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
	if (level > 0) {
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