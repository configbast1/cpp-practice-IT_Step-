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


};

#endif
