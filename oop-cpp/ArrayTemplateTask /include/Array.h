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

T GetAt(int index) const;
    void SetAt(int index, const T& value);
    T& operator[](int index);

    void Add(const T& value);
    void Append(const Array<T>& other);
    Array<T>& operator=(const Array<T>& other);

    T* GetData() const;
    void InsertAt(int index, const T& value);
    void RemoveAt(int index);
};

template <typename T>
Array<T>::Array() : data(nullptr), size(0), grow(1), upperBound(-1) {}

template <typename T>
Array<T>::~Array() {
    delete[] data;
}

#endif
