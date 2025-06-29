#include "MyString.h"

int mystrcmp(const char* s1, const char* s2) {
    while (*s1 && (*s1 == *s2)) {
        ++s1;
        ++s2;
    }
    return *(unsigned char*)s1 - *(unsigned char*)s2;
}

void mystrcpy(char* dest, const char* src) {
    while (*src) {
        *dest++ = *src++;
    }
    *dest = '\0';
}
