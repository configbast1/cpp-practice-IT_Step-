#ifndef PET_H
#define PET_H

#include <iostream>
#include <string>

class Pet {
protected:
    std::string name;
    std::string info;

public:
    Pet(const std::string& n, const std::string& i) : name(n), info(i) {}

    virtual void Show() const {
        std::cout << "Name: " << name << "\nInfo: " << info << std::endl;
    }

    virtual ~Pet() {}
};

#endif
