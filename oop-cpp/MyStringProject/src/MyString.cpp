#include "MyString.h"
#include "MyStringHelpers.h"

using namespace std; 

MyString::MyString() {
    str = nullptr;
    length = 0;
}

MyString::MyString(int size) {
    length = size;
    str = new char[length + 1];
    str[0] = '\0'; 
    
}

MyString::MyString(const char* s) {
    length = mystrlen(s);
    str = new char[length + 1];
    mystrcpy(str, s);
}

MyString::MyString(const MyString& other) {
    length = other.length;
    str = new char[length + 1];
    mystrcpy(str, other.str);
}

MyString::MyString(MyString&& other) {
    length = other.length;
    str = other.str;
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
        mystrcpy(str, other.str);
    }
    return *this;
}

MyString& MyString::operator=(MyString&& other) {
    if (this != &other) {
        delete[] str;
        length = other.length;
        str = other.str;
        other.str = nullptr;
        other.length = 0;
    }
    return *this;
}

MyString MyString::operator+(const MyString& other) {
    int newLength = length + other.length;
    MyString result(newLength);

    mystrcpy(result.str, str);

    int i = 0;
    while (result.str[i] != '\0') ++i;

    const char* p = other.str;
    while (*p) {
        result.str[i++] = *p++;
    }
    result.str[i] = '\0';

    return result;
}

char& MyString::operator[](int index) {
    return str[index];
}

int MyString::getLength() const {
    return length;
}

ostream& operator<<(ostream& out, const MyString& s) {
    out << s.str;
    return out;
}

istream& operator>>(istream& in, MyString& s) {
    char buffer[256];
    in >> buffer;

    delete[] s.str;
    s.length = mystrlen(buffer);
    s.str = new char[s.length + 1];
    mystrcpy(s.str, buffer);

    return in;
}
