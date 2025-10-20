#include "CaptainAmerica.hpp"

CaptainAmerica::CaptainAmerica()
    : SuperHero("Captain America", std::make_shared<Human>(), std::make_shared<Good>()) {
    addAbility(std::make_shared<SuperStrength>());
}
