#pragma once   

#include <iostream>
using namespace std;

template <class T>
class Array {
private:
    T* data;           
    int size;         
    int grow;          
public:
    // Конструктор по умолчанию
    Array() {
        data = nullptr;
        size = 0;
        grow = 1;  
    }
