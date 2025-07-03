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

    int GetSize() const { return size; }

    void SetSize(int newSize, int newGrow = 1) {
        if (newGrow > 0) grow = newGrow;
        if (newSize == size) return;

        T* newData = nullptr;
        if (newSize > 0)
            newData = new T[newSize];

        int elementsToCopy = (newSize < count) ? newSize : count;

        for (int i = 0; i < elementsToCopy; ++i)
            newData[i] = data[i];

        delete[] data;
        data = newData;
        size = newSize;
        if (count > size) count = size;
    }
    
         T GetAt(int index) const {
        if (index >= 0 && index < count) return data[index];
        throw std::out_of_range("Index out of range");
    }

    void SetAt(int index, const T& value) {
        if (index >= 0 && index < count) data[index] = value;
    }

    T& operator[](int index) { return data[index]; }
    const T& operator[](int index) const { return data[index]; }

};
#endif 
