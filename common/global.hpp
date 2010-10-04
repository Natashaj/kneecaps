#pragma once
#include <cassert>

#ifdef NDEBUG
#define expect(expr) expr
#else
#define expect(expr) assert(expr)
#endif
