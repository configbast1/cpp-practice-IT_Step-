#include "Flat.h"
#include <iostream>
using namespace std;

Flat::Flat() {
    area = 0.0;
    price = 0.0;
}

Flat::Flat(double a, double p) {
    area = a;
    price = p;
}

bool Flat::operator==(const Flat& other) const {
    return this->area == other.area;
}

Flat& Flat::operator=(const Flat& other) {
    if (this != &other) {
        this->area = other.area;
        this->price = other.price;
    }
    return *this;
}

bool Flat::operator>(const Flat& other) const {
    return this->price > other.price;
}

void Flat::show() const {
    cout << "Площа: " << area << ", Ціна: " << price << endl;
}
