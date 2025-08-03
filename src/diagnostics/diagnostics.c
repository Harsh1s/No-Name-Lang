#include "diagnostics.h"

int nnl_is_identifier_start(char ch) { return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || ch == '_'; }
int nnl_is_identifier_continue(char ch) { return nnl_is_identifier_start(ch) || (ch >= '0' && ch <= '9'); }
size_t nnl_count_lines(const char* source) { size_t lines = 1; for (const char* p = source; *p; ++p) if (*p == '\n') ++lines; return lines; }
