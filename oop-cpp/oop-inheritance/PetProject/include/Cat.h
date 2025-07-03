#ifndef CAT_H
#define CAT_H

#include "Pet.h"
#include <iostream>
using namespace std;

class Cat : public Pet {
public:
    Cat(const string &name) : Pet(name) {}
    void Show() const override { cout << "Name: " << name << endl; }
    void Sound() const override { cout << name << " meows: Meow!" << endl; }
    void Type() const override { cout << "Type: Cat" << endl; }
};

#endif
