#ifndef STRING_H
#define STRING_H

#include <iostream>
#include <cstring>

class String {
private:
    char* str;
    int length;

public:
    String() : str(nullptr), length(0) {}

~String() {
    delete[] str;
}

String(const char* s) {
    if (s) {
        length = std::strlen(s);
        str = new char[length + 1];
        std::strcpy(str, s);
    } else {
        str = nullptr;
        length = 0;
    }
}

};

#endif
