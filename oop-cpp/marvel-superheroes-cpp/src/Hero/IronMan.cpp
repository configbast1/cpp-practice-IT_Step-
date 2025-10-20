#include "IronMan.hpp"

IronMan::IronMan()
    : SuperHero("Iron Man", std::make_shared<Human>(), std::make_shared<Good>()) {
    addAbility(std::make_shared<Flyable>());
    addAbility(std::make_shared<Bulletproof>());
}
