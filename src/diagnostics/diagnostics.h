#pragma once

#include <stddef.h>

typedef struct { size_t line; size_t column; const char* message; } nnl_diagnostic;
