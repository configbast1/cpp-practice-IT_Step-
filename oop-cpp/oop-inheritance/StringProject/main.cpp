#include "include/String.h"
#include "include/BitString.h"

int main() {

 String animal1("Dog");
    String animal2("Cat");
    String combined = animal1 + animal2;

    animal1.Show();
    animal2.Show();
    combined.Show();

    if (animal1 == animal2) {
        std::cout << "Equal\n";
    } else {
        std::cout << "Not equal\n";
    }
