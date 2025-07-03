#include <iostream>
#include <cstring>
#include "MyString.h"

using namespace std;

MyString::MyString() {
    str = nullptr;
    length = 0;
}

MyString::MyString(size_t size) {
    length = size;
    str = new char[length + 1];
    str[0] = '\0';
}
MyString::MyString(const char* s) {
    if (s) {
        length = strlen(s);
        str = new char[length + 1];
        strcpy_s(str, length + 1, s);
    }
    else {
        str = nullptr;
        length = 0;
    }
}

MyString::MyString(const MyString& other) {
    length = other.length;
    if (length > 0) {
        str = new char[length + 1];
        strcpy_s(str, length + 1, other.str);
    }
    else {
        str = nullptr;
    }
}

MyString::MyString(MyString&& other) noexcept {
    str = other.str;
    length = other.length;
    other.str = nullptr;
    other.length = 0;
}

MyString::~MyString() {
    delete[] str;
}

MyString& MyString::operator=(const MyString& other) {
    if (this != &other) {
        delete[] str;
        length = other.length;
        str = new char[length + 1];
        strcpy_s(str, length + 1, other.str);
    }
    return *this;
}

MyString& MyString::operator=(MyString&& other) noexcept {
    if (this != &other) {
        delete[] str;
        str = other.str;
        length = other.length;
        other.str = nullptr;
        other.length = 0;
    }
    return *this;
}

MyString MyString::operator+(const MyString& other) const {
    size_t newLength = length + other.length;
    MyString result(newLength);

    if (length > 0) {
        strcpy_s(result.str, length + 1, str);
    }

    if (other.length > 0) {
        strcat_s(result.str, newLength + 1, other.str);
    }

    return result;
}

char MyString::operator[](size_t index) const {
    return str[index];
}

size_t MyString::getLength() const {
    return length;
}

ostream& operator<<(ostream& os, const MyString& s) {
    if (s.str)
        os << s.str;
    return os;
}

istream& operator>>(istream& is, MyString& s) {
    char buffer[1000];
    is >> buffer;

    s.length = strlen(buffer);
    delete[] s.str;
    s.str = new char[s.length + 1];
    strcpy_s(s.str, s.length + 1, buffer);

    return is;
}
