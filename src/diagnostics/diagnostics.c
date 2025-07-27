#include "diagnostics.h"

int nnl_is_identifier_start(char ch) { return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || ch == '_'; }
