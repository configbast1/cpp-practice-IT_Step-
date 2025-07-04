#include "ReservoirArray.h"
#include <iostream>

using namespace std;

ReservoirArray::ReservoirArray() {
    arr = nullptr;
    size = 0;
}

ReservoirArray::~ReservoirArray() {
    delete[] arr;
}

void ReservoirArray::add(const Reservoir& res) {
    Reservoir* newArr = new Reservoir[size + 1];
    for (int i = 0; i < size; i++)
        newArr[i] = arr[i];
    newArr[size] = res;
    delete[] arr;
    arr = newArr;
    size++;
}

void ReservoirArray::remove(int index) {
    if (index < 0 || index >= size) return;
    Reservoir* newArr = new Reservoir[size - 1];
    for (int i = 0, j = 0; i < size; i++)
        if (i != index)
            newArr[j++] = arr[i];
    delete[] arr;
    arr = newArr;
    size--;
}

void ReservoirArray::showAll() const {
    for (int i = 0; i < size; i++) {
        cout << "==== Водойма #" << i + 1 << " ====" << endl;
        arr[i].show();
        cout << endl;
    }
}

void ReservoirArray::saveAllToText(const char* filename) const {
    FILE* f;
    fopen_s(&f, filename, "w");
    if (f) {
        for (int i = 0; i < size; i++)
            arr[i].saveToTextFile(f);
        fclose(f);
    }
}

void ReservoirArray::saveAllToBinary(const char* filename) const {
    FILE* f;
    fopen_s(&f, filename, "wb");
    if (f) {
        for (int i = 0; i < size; i++)
            arr[i].saveToBinaryFile(f);
        fclose(f);
    }
}

void ReservoirArray::loadAllFromBinary(const char* filename) {
    FILE* f;
    fopen_s(&f, filename, "rb");
    if (f) {
        delete[] arr;
        arr = nullptr;
        size = 0;

        Reservoir temp;
        while (fread(&temp, sizeof(Reservoir), 1, f) == 1) {
            add(temp);
        }
        fclose(f);
    }
}
