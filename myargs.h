#pragma once

#include "argtable2.h"

extern struct arg_lit *i, *s, *author;
extern struct arg_str *keyword;
extern struct arg_int *size;
extern struct arg_lit *help,*version;
extern struct arg_file *files;
extern struct arg_end *end;

int ParseMyArgs(int argc, char *argv[]);
void DeleteMyArgs(void);