#pragma once

template <typename T>
class Array {
private:
    T* data;
    int size;
    int capacity;

public:
    Array(int initialSize = 0);
    ~Array();

    int GetSize() const;
    void SetSize(int newSize);
    T& GetAt(int index);
    void SetAt(int index, const T& value);
    void Add(const T& value);
    void RemoveAt(int index);
    void InsertAt(int index, const T& value);
};
