#pragma once

#include "Reservoir.h"

class ReservoirArray {
private:
    Reservoir* arr;
    int size;

public:
    ReservoirArray();
    ~ReservoirArray();

    void add(const Reservoir& res);
    void remove(int index);

    void showAll() const;

    void saveAllToText(const char* filename) const;
    void saveAllToBinary(const char* filename) const;
    void loadAllFromBinary(const char* filename);
};
