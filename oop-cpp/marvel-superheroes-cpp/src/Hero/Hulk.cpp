#include "Hulk.hpp"

Hulk::Hulk()
    : SuperHero("Hulk", std::make_shared<Human>(), std::make_shared<Good>()) {
    addAbility(std::make_shared<SuperStrength>());
    addAbility(std::make_shared<Bulletproof>());
}
