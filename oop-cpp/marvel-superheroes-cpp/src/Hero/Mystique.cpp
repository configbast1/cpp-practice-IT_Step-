#include "Mystique.hpp"

Mystique::Mystique()
    : SuperHero("Mystique", std::make_shared<Human>(), std::make_shared<Evil>()) {
    addAbility(std::make_shared<SuperSpeed>());
}
