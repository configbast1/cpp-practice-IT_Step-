#include "Array.h"
#include <stdexcept>

template <typename T>
Array<T>::Array(int initialSize) : size(0), capacity(initialSize) {
    data = new T[capacity];
}

template <typename T>
Array<T>::~Array() {
    delete[] data;
}

template <typename T>
int Array<T>::GetSize() const {
    return size;
}

template <typename T>
void Array<T>::SetSize(int newSize) {
    if (newSize > capacity) {
        capacity = newSize;
        T* newData = new T[capacity];
        for (int i = 0; i < size; ++i) {
            newData[i] = data[i];
        }
        delete[] data;
        data = newData;
    }
    size = newSize;
}

template <typename T>
T& Array<T>::GetAt(int index) {
    if (index < 0 || index >= size) {
        throw std::out_of_range("Index out of range");
    }
    return data[index];
}

template <typename T>
void Array<T>::SetAt(int index, const T& value) {
    if (index < 0 || index >= size) {
        throw std::out_of_range("Index out of range");
    }
    data[index] = value;
}

template <typename T>
void Array<T>::Add(const T& value) {
    if (size == capacity) {
        SetSize(size + 1);
    }
    data[size++] = value;
}

template <typename T>
void Array<T>::RemoveAt(int index) {
    if (index < 0 || index >= size) {
        throw std::out_of_range("Index out of range");
    }
    for (int i = index; i < size - 1; ++i) {
        data[i] = data[i + 1];
    }
    --size;
}

template <typename T>
void Array<T>::InsertAt(int index, const T& value) {
    if (index < 0 || index > size) {
        throw std::out_of_range("Index out of range");
    }
    if (size == capacity) {
        SetSize(size + 1);
    }
    for (int i = size; i > index; --i) {
        data[i] = data[i - 1];
    }
    data[index] = value;
    ++size;
}
