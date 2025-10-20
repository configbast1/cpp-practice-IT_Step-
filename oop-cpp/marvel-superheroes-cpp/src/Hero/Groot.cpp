#include "Groot.hpp"

Groot::Groot()
    : SuperHero("Groot", std::make_shared<Animal>(), std::make_shared<Good>()) {
    addAbility(std::make_shared<SuperStrength>());
}
