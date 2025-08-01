#include "diagnostics.h"

int nnl_is_identifier_start(char ch) { return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || ch == '_'; }
int nnl_is_identifier_continue(char ch) { return nnl_is_identifier_start(ch) || (ch >= '0' && ch <= '9'); }
