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
   
    Array() {
        data = nullptr;
        size = 0;
        grow = 1;  
    }

 ~Array() {
        delete[] data;
    }
int GetSize() const {
        return size;
    }
