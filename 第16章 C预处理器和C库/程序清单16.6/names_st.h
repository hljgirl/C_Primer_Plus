#include "stdafx.h"
#include <Windows.h>

#define SLEN 32

struct names_st
{
	char first[SLEN];
	char last[SLEN];
};

typedef struct names_st names;

void get_names(names *);
void show_names(const names *);