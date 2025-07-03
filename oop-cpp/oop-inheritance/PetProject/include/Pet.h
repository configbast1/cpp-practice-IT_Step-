#ifndef PET_H
#define PET_H

#include <string>
using namespace std;

class Pet {
protected:
    string name;
public:
    Pet(const string &name) : name(name) {}
    virtual void Show() const = 0;
    virtual void Sound() const = 0;
    virtual void Type() const = 0;
    virtual ~Pet() {}
};

#endif
