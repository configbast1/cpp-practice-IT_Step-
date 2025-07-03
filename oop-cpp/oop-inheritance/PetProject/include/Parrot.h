#ifndef PARROT_H
#define PARROT_H

#include "Pet.h"
#include <iostream>
using namespace std;

class Parrot : public Pet {
public:
    Parrot(const string &name) : Pet(name) {}
    void Show() const override { cout << "Name: " << name << endl; }
    void Sound() const override { cout << name << " says: Hello!" << endl; }
    void Type() const override { cout << "Type: Parrot" << endl; }
};

#endif
