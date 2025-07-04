#pragma once

#include <cstdio>

#define NAME_LENGTH 50
#define TYPE_LENGTH 20

class Reservoir {
private:
    char name[NAME_LENGTH];
    char type[TYPE_LENGTH];
    double width;
    double length;
    double maxDepth;

public:
    Reservoir();
    explicit Reservoir(const char* n, const char* t, double w, double l, double d);
    Reservoir(const Reservoir& other);
    ~Reservoir();

    void setName(const char* n);
    void setType(const char* t);
    void setDimensions(double w, double l, double d);

    const char* getName() const;
    const char* getType() const;
    double getWidth() const;
    double getLength() const;
    double getMaxDepth() const;

    double getVolume() const;
    double getSurfaceArea() const;

    bool isSameType(const Reservoir& other) const;
    bool isLargerThan(const Reservoir& other) const;

    void show() const;

    void saveToTextFile(FILE* f) const;
    void saveToBinaryFile(FILE* f) const;
    void loadFromBinaryFile(FILE* f);
};
