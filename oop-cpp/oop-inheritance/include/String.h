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
String(const String& other) {
    length = other.length;
    if (length > 0) {
        str = new char[length + 1];
        std::strcpy(str, other.str);
    } else {
        str = nullptr;
    }
} 
String& operator=(const String& other) {
    if (this != &other) {
        delete[] str;
        length = other.length;
        str = new char[length + 1];
        std::strcpy(str, other.str);
    }
    return *this;
}
int GetLength() const { return length; }

void Clear() {
    delete[] str;
    str = nullptr;
    length = 0;
}
};

#endif
