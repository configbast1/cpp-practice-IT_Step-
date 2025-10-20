#pragma once

#include <string>
#include <vector>
#include <memory>
#include <iostream>
#include "Ability.hpp"
#include "Being.hpp"
#include "Alignment.hpp"

class SuperHero {
protected:
    std::string name;
    std::shared_ptr<Being> race;
    std::shared_ptr<Alignment> alignment;
    std::vector<std::shared_ptr<Ability>> abilities;

public:
    SuperHero(const std::string& name,
              std::shared_ptr<Being> race,
              std::shared_ptr<Alignment> alignment);

    virtual ~SuperHero() = default;

    void addAbility(std::shared_ptr<Ability> ability);

    std::string getName() const;
    std::string getRace() const;
    std::string getAlignment() const;

    bool canFly() const;
    void printInfo() const;
};
