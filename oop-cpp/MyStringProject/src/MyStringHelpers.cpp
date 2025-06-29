#include "MyStringHelpers.h"

int mystrlen(const char* s) {
    int len = 0;
    while (*s++) ++len;
    return len;
}
