#pragma once

#include <stddef.h>

typedef struct { size_t line; size_t column; const char* message; } nnl_diagnostic;
int nnl_is_identifier_start(char ch);
int nnl_is_identifier_continue(char ch);
size_t nnl_count_lines(const char* source);
nnl_diagnostic nnl_make_diagnostic(size_t line, size_t column, const char* message);
