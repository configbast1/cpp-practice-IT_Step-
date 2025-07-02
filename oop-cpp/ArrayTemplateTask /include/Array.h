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

