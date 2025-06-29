#pragma once
#include "MyString.h" 

class Overcoat {
private:
    char type[30];
    double price;

public:
    Overcoat();
    Overcoat(const char* t, double p);

    bool operator==(const Overcoat& other) const;
    Overcoat& operator=(const Overcoat& other);
    bool operator>(const Overcoat& other) const;

    void show() const;
};


