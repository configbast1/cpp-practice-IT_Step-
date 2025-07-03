#ifndef ARRAY_H
#define ARRAY_H

template <typename T>
class Array {
private:
    T* data;
    int size;
    int grow;
    int count;

public:
    Array(int initSize = 0, int growSize = 1)
        : size(initSize), grow(growSize), count(0)
    {
        if (size > 0)
            data = new T[size];
        else
            data = nullptr;
    }

    ~Array() {
        delete[] data;
    }


};
#endif 
