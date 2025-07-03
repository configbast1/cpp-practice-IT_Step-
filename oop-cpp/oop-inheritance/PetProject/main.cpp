#include "Dog.h"
#include "Cat.h"
#include "Parrot.h"
#include <iostream>
using namespace std;

int main() {
    Pet* pets[3];
    pets[0] = new Dog("Buddy");
    pets[1] = new Cat("Mittens");
    pets[2] = new Parrot("Kesha");

    for (int i = 0; i < 3; ++i) {
        pets[i]->Show();
        pets[i]->Sound();
        pets[i]->Type();
        cout << "-----" << endl;
    }

    for (int i = 0; i < 3; ++i) {
        delete pets[i];
    }

    return 0;
}
