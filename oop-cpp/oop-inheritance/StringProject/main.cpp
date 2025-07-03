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
    BitString bits1("1010");
    BitString bits2("1100");
    BitString bitsCombined = bits1 + bits2;

    bits1.Show();
    bits2.Show();
    bitsCombined.Show();

    bitsCombined.InvertSign();
    bitsCombined.Show();

    if (bits1 != bits2) {
        std::cout << "BitStrings are not equal\n";
    } else {
        std::cout << "BitStrings are equal\n";
    } 
   return 0;
} 
