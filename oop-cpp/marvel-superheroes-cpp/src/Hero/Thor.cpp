#include "Thor.hpp"

Thor::Thor()
    : SuperHero("Thor", std::make_shared<God>(), std::make_shared<Good>()) {
    addAbility(std::make_shared<Flyable>());
    addAbility(std::make_shared<SuperStrength>());
    addAbility(std::make_shared<Bulletproof>());
}
