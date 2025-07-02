#ifndef STRING_H
#define STRING_H

#include <iostream>
#include <cstring>

class String {
protected:
    char* data;

public:
    String();
    String(const char* str);
    String(const String& other);
    String& operator=(const String& other);

    ~String();

    int length() const;
    void clear();

    String operator+(const String& other) const;
    String& operator+=(const String& other);

  void print() const;
};
