#ifndef CAT_H
#define CAT_H

#include "Pet.h"

class Cat : public Pet {
public:
    Cat(const std::string& n, const std::string& desc) : Pet(n, desc) {}

    void Show() const override {
        std::cout << "[Cat] ";
        Pet::Show();
    }
};

#endif
