#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>

template <typename T>
class Array {
private:
    T* data;
    int size;
    int grow;
    int upperBound;

public:
    Array();
    ~Array();

 int GetSize() const;
    void SetSize(int size, int grow = 1);
    int GetUpperBound() const;
    bool IsEmpty() const;
    void FreeExtra();
    void RemoveAll();
