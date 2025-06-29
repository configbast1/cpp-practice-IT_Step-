#include "Overcoat.h"
#include <iostream>
using namespace std;

Overcoat::Overcoat() {
    mystrcpy(type, "");
    price = 0.0;
}

Overcoat::Overcoat(const char* t, double p) {
    mystrcpy(type, t);
    price = p;
}

bool Overcoat::operator==(const Overcoat& other) const {
    return mystrcmp(this->type, other.type) == 0;
}

Overcoat& Overcoat::operator=(const Overcoat& other) {
    if (this != &other) {
        mystrcpy(this->type, other.type);
        this->price = other.price;
    }
    return *this;
}

bool Overcoat::operator>(const Overcoat& other) const {
    if (mystrcmp(this->type, other.type) == 0) {
        return this->price > other.price;
    } else {
        cout << "Неможливо порівняти пальто різних типів!" << endl;
        return false;
    }
}

void Overcoat::show() const {
    cout << "Тип: " << type << ", Ціна: " << price << endl;
}
