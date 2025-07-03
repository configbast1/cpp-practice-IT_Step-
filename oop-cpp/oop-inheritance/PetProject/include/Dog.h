#ifndef DOG_H
#define DOG_H

#endif

#include "Pet.h"
#include <iostream>

class Dog : public Pet {
public:
    Dog(const string &name) : Pet(name) {}
    void Show() const override;
    void Sound() const override;
    void Type() const override;
};
