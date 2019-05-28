#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* CopyString(char* source) {
	int len = strlen(source);
	char* n = (char*)malloc(len + 1);
	strcpy(n, source);
	return n;
}