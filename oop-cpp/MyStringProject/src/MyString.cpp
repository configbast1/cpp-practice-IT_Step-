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
