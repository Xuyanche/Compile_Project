#pragma once
#include "cgen.h"
static SymTab *scope, *subscope;
extern SymTab *SymbolTable;
extern FILE* output;
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
		fprintf(output, "  test\n");
		fprintf(output, "  jz _end_if_%d\n", nr_if);
		// Generate then part
		child = child->brother;
		cGen(child);
		// Generate endif
		fprintf(output, "_end_if_%d:\n", nr_if);
		nr_if++;
		break;
	}
	case IfElseT: {
		// Generate test expression
		STNode *child = t->child;
		cGen(child);
		fprintf(output, "  test\n");
		fprintf(output, "  jz _else_%d\n", nr_else);
		// Generate then part
		child = child->brother;
		cGen(child);
		fprintf(output, "  jmp _end_if_else_%d\n", nr_else);
		// Generate else part
		fprintf(output, "_else_%d:\n", nr_else);
		child = child->brother;
		cGen(child);
		// Generate endif
		fprintf(output, "_end_if_%d:\n", nr_else);
		nr_else++;
		break;
	}
	case IterStmtT: {
		// Generate test part
		fprintf(output, "_while_%d:\n", nr_while);
		STNode *child = t->child;
		cGen(child);
		fprintf(output, "  test\n");
		fprintf(output, "  jz _end_while_%d\n", nr_while);
		// Generate iteration body
		child = child->brother;
		cGen(child);
		fprintf(output, "  jmp _while_%d\n", nr_while);
		fprintf(output, "_end_while%d:\n", nr_while);
		nr_while++;
		break;
	}
	case RetnStmtT: {
		STNode *child = t->child;
		if (!child)
			fprintf(output, "  ret\n");
		else {
			cGen(child);
			fprintf(output, "  retv\n");
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
			fprintf(output, "  %s\n", arith[t->attr.Op - 258]);
		else
			fprintf(output, "  %s\n", relop[t->attr.Op - 277]);
		break;
	}
	case ConstT: {
		fprintf(output, "  ldc %d\n", t->attr.val);
		break;
	}
	case IdT: {
		if (t->father->kind == ExprK && t->father->type.expr == AssignT && t->brother)
			fprintf(output, "  lda %s\n", t->attr.name);
		else if (t->father->kind == ExprK && t->father->type.expr == ParasT)
			fprintf(output, "  arg %s\n", t->attr.name);
		else
			fprintf(output, "  lod %s\n", t->attr.name);
		break;
	}
	case CallT: {
		if (t->child) cGen(t->child);
		fprintf(output, "  call _%s\n", t->attr.name);
		break;
	}
	case AssignT: {
		cGen(t->child);
		cGen(t->child->brother);
		fprintf(output, "  sti\n", t->attr.name);
		break;
	}
	case EntryT: {
		fprintf(output, "  lda %s\n", t->attr.name);
		cGen(t->child);
		if (t->father->kind == ExprK && t->father->type.expr == AssignT && t->brother) // Be a lvalue in an assignment
		{
			fprintf(output, "  lda %s\n", t->attr.name);
			fprintf(output, "  add\n");
		}
		else
			fprintf(output, "  ldi\n", t->attr.name);
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
		fprintf(output, "_%s:\n", t->attr.name);
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
