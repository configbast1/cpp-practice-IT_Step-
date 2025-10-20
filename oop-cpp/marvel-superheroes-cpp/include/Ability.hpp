#pragma once
#include <string>

class Ability {
public:
    virtual std::string getName() const = 0;
    virtual ~Ability() {}
};

class Flyable : public Ability {
public:
    std::string getName() const override { return "Flight"; }
};

class SuperStrength : public Ability {
public:
    std::string getName() const override { return "Super Strength"; }
};

class XRayVision : public Ability {
public:
    std::string getName() const override { return "X-Ray Vision"; }
};

class Bulletproof : public Ability {
public:
    std::string getName() const override { return "Bulletproof"; }
};

class SuperSpeed : public Ability {
public:
    std::string getName() const override { return "Super Speed"; }
};
