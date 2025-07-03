#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Figure.h"

class Triangle : public Figure {
private:
    double base;
    double height;
public:
    Triangle(double b, double h) : base(b), height(h) {}

    double GetArea() const override {
        return 0.5 * base * height;
    }
};

#endif
