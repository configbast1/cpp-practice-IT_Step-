#include "../include/BitString.h"
#include <cstring> 

BitString::BitString() : String() {} 

BitString::BitString(const char* str) : String() {
    bool valid = true;
    for (size_t i = 0; i < strlen(str); ++i) {
        if (str[i] != '0' && str[i] != '1') {
            valid = false;
            break;
        }
    }
    if (valid) {
        delete[] data;
        data = new char[strlen(str) + 1];
        strcpy(data, str);
    } else {
        clear();
    }
}

BitString::BitString(const BitString& other) : String(other) {} 

BitString& BitString::operator=(const BitString& other) {
    if (this != &other) {
        String::operator=(other);
    }
    return *this;
}
