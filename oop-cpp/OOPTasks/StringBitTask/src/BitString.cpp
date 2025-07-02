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

BitString::~BitString() {}

void BitString::ChangeSign() {
    if (!data || strlen(data) == 0) return;

    for (size_t i = 0; i < strlen(data); ++i) {
        data[i] = (data[i] == '0') ? '1' : '0';
    }

    bool carry = true;
    for (int i = strlen(data) - 1; i >= 0 && carry; --i) {
        if (data[i] == '0') {
            data[i] = '1';
            carry = false;
        } else {
            data[i] = '0';
        }
    }
}
