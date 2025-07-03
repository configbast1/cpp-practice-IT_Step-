#pragma once
#include <iostream>
using namespace std;

class MyString {
private:
    char* str;
    size_t length;

public:
    MyString();
    MyString(size_t size);
    MyString(const char* s);
    MyString(const MyString& other);
    MyString(MyString&& other) noexcept;

    ~MyString();

    MyString& operator=(const MyString& other);
    MyString& operator=(MyString&& other) noexcept;

    MyString operator+(const MyString& other) const;

    char operator[](size_t index) const;

    size_t getLength() const;

    friend ostream& operator<<(ostream& os, const MyString& s);
    friend istream& operator>>(istream& is, MyString& s);
};
