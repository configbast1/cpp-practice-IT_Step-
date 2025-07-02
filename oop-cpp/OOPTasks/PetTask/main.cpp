#include <iostream>
#include "Dog.h"
#include "Cat.h"
#include "Parrot.h"

int main() {
    Pet* pets[3];

    pets[0] = new Dog("Rex", "Big guard dog");
    pets[1] = new Cat("Murka", "Independent fluffy cat");
    pets[2] = new Parrot("Kesha", "Funny talkative parrot");

    std::cout << "Pets info:\n";
    for (int i = 0; i < 3; ++i) {
        pets[i]->Show();
        std::cout << std::endl;
    }

    for (int i = 0; i < 3; ++i) {
        delete pets[i];
    }

    return 0;
}
