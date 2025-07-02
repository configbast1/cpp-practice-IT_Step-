#ifndef PARROT_H
#define PARROT_H

#include "Pet.h"

class Parrot : public Pet {
public:
    Parrot(const std::string& n, const std::string& desc) : Pet(n, desc) {}

    void Show() const override {
        std::cout << "[Parrot] ";
        Pet::Show();
    }
};

#endif
