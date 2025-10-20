
#include "SuperHero.hpp"
#include "Characters/Thor.hpp"
#include "Characters/Hulk.hpp"
#include "Characters/IronMan.hpp"
#include "Characters/Mystique.hpp"
#include "Characters/CaptainAmerica.hpp"
#include "Characters/Groot.hpp"

#include <vector>
#include <memory>
#include <iostream>

int main() {
    std::vector<std::shared_ptr<SuperHero>> heroes;

    heroes.push_back(std::make_shared<Thor>());
    heroes.push_back(std::make_shared<Hulk>());
    heroes.push_back(std::make_shared<IronMan>());
    heroes.push_back(std::make_shared<Mystique>());
    heroes.push_back(std::make_shared<CaptainAmerica>());
    heroes.push_back(std::make_shared<Groot>());

    std::cout << "=== All Superheroes ===\n";
    for (const auto& hero : heroes) {
        hero->printInfo();
    }

    std::cout << "\n=== Superheroes Who Can Fly ===\n";
    for (const auto& hero : heroes) {
        if (hero->canFly()) {
            std::cout << hero->getName() << " can fly.\n";
        }
    }

    return 0;
}
