#include "SuperHero.hpp"

SuperHero::SuperHero(const std::string& name,
                     std::shared_ptr<Being> race,
                     std::shared_ptr<Alignment> alignment)
    : name(name), race(race), alignment(alignment) {}

void SuperHero::addAbility(std::shared_ptr<Ability> ability) {
    abilities.push_back(ability);
}

std::string SuperHero::getName() const {
    return name;
}

std::string SuperHero::getRace() const {
    return race->getRace();
}

std::string SuperHero::getAlignment() const {
    return alignment->getSide();
}

bool SuperHero::canFly() const {
    for (const auto& ab : abilities) {
        if (std::dynamic_pointer_cast<Flyable>(ab)) return true;
    }
    return false;
}

void SuperHero::printInfo() const {
    std::cout << "Name: " << name << "\n";
    std::cout << "Race: " << getRace() << "\n";
    std::cout << "Alignment: " << getAlignment() << "\n";
    std::cout << "Abilities: ";
    for (const auto& ab : abilities) {
        std::cout << ab->getName() << ", ";
    }
    std::cout << "\n------------------------\n";
}
