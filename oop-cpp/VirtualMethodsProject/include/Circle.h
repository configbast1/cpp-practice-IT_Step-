#ifndef CIRCLE_H
#define CIRCLE_H

#include "Figure.h"

class Circle : public Figure {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}

    double GetArea() const override {
        return 3.14159 * radius * radius;
    }
};

#endif
