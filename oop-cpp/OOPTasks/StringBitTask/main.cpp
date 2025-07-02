#include <iostream>
#include "include/String.h"

int main() {
    String str1;
    str1.print(); 

String str2("Hello");
    str2.print(); 

String str3(str2);
    str3.print();

str1 = str2;
    str1.print();  
    
std::cout << "Length: " << str2.length() << std::endl;
    str2.clear();
    str2.print();

    String str4("World");
    String str5 = str3 + str4;
    str5.print();

    str3 += str4;
    str3.print();

    if (str3 == str5) {
        std::cout << "Strings are equal!" << std::endl;
    } else {
        std::cout << "Strings are NOT equal!" << std::endl;
    }

    return 0;
}
