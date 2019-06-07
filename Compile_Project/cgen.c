#pragma once
#include "cgen.h"
static SymTab *scope, *subscope;
extern SymTab *SymbolTable;
extern FILE* poutput;
static int nr_label = 0, nr_if = 0, nr_else = 0, nr_while = 0;
char* arith[4] = { "add", "sub","mul","div" };
char* relop[6] = { "cmple","cmpleq","cmpge","cmpgeq","cmpeq","cmpneq" };

void GenStmt(STNode * t)
{
	if (!t) return;
	switch (t->type.stmt)
	{
	case ProgStmtT: {
		scope = SymbolTable;
		subscope = scope->child;
		STNode *child = t->child;
		while (child)
		{
			cGen(child);
			child = child->brother;
		}
		break;
	}
	case CompStmtT: {
		int newScope = (t->father->kind != DeclK) ? 1 : 0;
		if (newScope) {
			scope = subscope;
			subscope = scope->child;
		}
		STNode *child = t->child;
		while (child)
		{
			cGen(child);
			child = child->brother;
		}
		subscope = scope->brother;
		scope = scope->father;
		break;
	}
	case StmtListT: {
		STNode *child = t->child;
		while (child)
		{
			cGen(child);
			child = child->brother;
		}
		break;
	}
	case IfT: {
		// Generate test expression
		STNode *child = t->child;
		cGen(child);
		fprintf(poutput, "  test\n");
		fprintf(poutput, "  jz _end_if_%d\n", nr_if);
		// Generate then part
		child = child->brother;
		cGen(child);
		// Generate endif
		fprintf(poutput, "_end_if_%d:\n", nr_if);
		nr_if++;
		break;
	}
	case IfElseT: {
		// Generate test expression
		STNode *child = t->child;
		cGen(child);
		fprintf(poutput, "  test\n");
		fprintf(poutput, "  jz _else_%d\n", nr_else);
		// Generate then part
		child = child->brother;
		cGen(child);
		fprintf(poutput, "  jmp _end_if_else_%d\n", nr_else);
		// Generate else part
		fprintf(poutput, "_else_%d:\n", nr_else);
		child = child->brother;
		cGen(child);
		// Generate endif
		fprintf(poutput, "_end_if_else_%d:\n", nr_else);
		nr_else++;
		break;
	}
	case IterStmtT: {
		// Generate test part
		fprintf(poutput, "_while_%d:\n", nr_while);
		STNode *child = t->child;
		cGen(child);
		fprintf(poutput, "  test\n");
		fprintf(poutput, "  jz _end_while_%d\n", nr_while);
		// Generate iteration body
		child = child->brother;
		cGen(child);
		fprintf(poutput, "  jmp _while_%d\n", nr_while);
		fprintf(poutput, "_end_while%d:\n", nr_while);
		nr_while++;
		break;
	}
	case RetnStmtT: {
		STNode *child = t->child;
		if (!child)
			fprintf(poutput, "  ret\n");
		else {
			cGen(child);
			fprintf(poutput, "  retv\n");
		}
		break;
	}
	case ExprStmtT: {
		cGen(t);
		break;
	}
	default:
		break;
	}
}

void GenExpr(STNode * t)
{
	if (!t) return;
	switch (t->type.expr)
	{
	case OpT: {
		cGen(t->child);
		cGen(t->child->brother);
		if (t->attr.Op <= 261)
			fprintf(poutput, "  %s\n", arith[t->attr.Op - ADD]);
		else
			fprintf(poutput, "  %s\n", relop[t->attr.Op - LE]);
		break;
	}
	case ConstT: {
		fprintf(poutput, "  ldc %d\n", t->attr.val);
		break;
	}
	case IdT: {
		if (t->father->kind == ExprK && t->father->type.expr == AssignT && t->brother)
			fprintf(poutput, "  lda %s\n", t->attr.name);
		else if (t->father->kind == ExprK && t->father->type.expr == ParasT)
			fprintf(poutput, "  arg %s\n", t->attr.name);
		else
			fprintf(poutput, "  lod %s\n", t->attr.name);
		break;
	}
	case CallT: {
		if (t->child) cGen(t->child);
		int nr_arg = 0;
		STNode* child = t->child->child; // Arg list
		while (child)
		{
			nr_arg++;
			child = child->brother;
		}
		fprintf(poutput, "  call _%s\n", t->attr.name);
		break;
	}
	case AssignT: {
		cGen(t->child);
		cGen(t->child->brother);
		fprintf(poutput, "  sti\n", t->attr.name);
		break;
	}
	case EntryT: {
		fprintf(poutput, "  lda %s\n", t->attr.name);
		cGen(t->child);
		if (t->father->kind == ExprK && t->father->type.expr == AssignT && t->brother) // Be a lvalue in an assignment
		{
			fprintf(poutput, "  lda %s\n", t->attr.name);
			fprintf(poutput, "  add\n");
		}
		else
			fprintf(poutput, "  ldi\n", t->attr.name);
		break;
	}
	case ArgsT: {
		STNode *child = t->child;
		while (child)
		{
			cGen(child);
			child = child->brother;
		}
		break;
	}
	case ParasT: {
		STNode *child = t->child;
		while (child)
		{
			cGen(child);
			child = child->brother;
		}
		break;
	}
	default:
		break;
	}
}

void GenDecl(STNode * t)
{
	switch (t->type.decl)
	{
	case FuncDeclT: {
		fprintf(poutput, "_%s:\n", t->attr.name);
		fprintf(poutput, "  ent\n");
		STNode *child = t->child;
		while (child)
		{
			if (child->kind == StmtK) {
				scope = subscope;
				subscope = scope->child;
			}
			cGen(child);
			child = child->brother;
		}
	}
	default:
		break;
	}
}

void cGen(STNode * t)
{
	switch (t->kind)
	{
	case StmtK: {
		GenStmt(t);
		break;
	}
	case ExprK: {
		GenExpr(t);
		break;
	}
	case DeclK: {
		GenDecl(t);
		break;
	}
	default:
		break;
	}
}
