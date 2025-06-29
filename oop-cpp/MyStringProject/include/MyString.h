#pragma once

#include <iostream>
using namespace std;

class MyString {
private:
    char* str;  
    int length;  
public:
    MyString();      
    MyString(int size); 
    MyString(const char* s);
    MyString(const MyString& other);
    MyString(MyString&& other);     

    ~MyString();

    MyString& operator=(const MyString& other);
    MyString& operator=(MyString&& other);

};
