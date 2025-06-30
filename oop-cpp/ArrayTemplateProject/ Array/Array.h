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

void SetSize(int newSize, int newGrow = 1) {
        if (newSize < 0) return;
        grow = newGrow;

        T* newData = new T[newSize];
        int minSize = (newSize < size) ? newSize : size;

        for (int i = 0; i < minSize; i++) {
            newData[i] = data[i];
        }

        delete[] data;
        data = newData;
        size = newSize;
    }

 int GetUpperBound() const {
        return size - 1;
    }

   
    bool IsEmpty() const {
        return size == 0;
    }

 void FreeExtra() {
        T* newData = new T[size];
        for (int i = 0; i < size; i++) {
            newData[i] = data[i];
        }
        delete[] data;
        data = newData;
    }
