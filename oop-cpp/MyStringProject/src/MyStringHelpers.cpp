#include "MyStringHelpers.h"

int mystrlen(const char* s) {
    int len = 0;
    while (*s++) ++len;
    return len;
}

int mystrlen(const char* s) {
    int len = 0;
    while (*s++) ++len;
    return len;
}

void mystrcpy(char* dest, const char* src) {
    while (*src) {
        *dest++ = *src++;
    }
    *dest = '\0';
}
