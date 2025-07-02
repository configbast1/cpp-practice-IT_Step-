#ifndef DOG_H
#define DOG_H

#include "Pet.h"

class Dog : public Pet {
public:
    Dog(const std::string& n, const std::string& desc) : Pet(n, desc) {}

    void Show() const override {
        std::cout << "[Dog] ";
        Pet::Show();
    }
};

#endif
