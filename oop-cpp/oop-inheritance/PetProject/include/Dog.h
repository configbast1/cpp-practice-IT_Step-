#ifndef DOG_H
#define DOG_H

#include "Pet.h"

class Dog : public Pet {
public:
    Dog(const string& name) : Pet(name) {}
    void Show() const override { cout << "Name: " << name << endl; }
    void Sound() const override { cout << name << " barks: Woof!" << endl; }
    void Type() const override { cout << "Type: Dog" << endl; }
};

#endif

