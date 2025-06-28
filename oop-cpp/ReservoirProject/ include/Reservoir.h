#pragma once
#include <iostream>
#include <stdio.h>

class Reservoir {
private:
    char name[50];
    char type[50];
    double width;
    double length;
    double maxDepth; 

сlass Reservoir {
private:
    char name[50];
    char type[50];
    double width;
    double length;
    double maxDepth;
public:
    Reservoir();
    explicit Reservoir(const char* _name, const char* _type, double _width, double _length, double _maxDepth);
    Reservoir(const Reservoir& other);
    ~Reservoir(); 
  double getVolume() const;
    double getArea() const;
    bool isSameType(const Reservoir& other) const;
    int compareArea(const Reservoir& other) const;

    void input();
    void print() const;

    void setName(const char* _name);
    const char* getName() const;

    void saveToText() const;
    void saveToBinary() const;
};
