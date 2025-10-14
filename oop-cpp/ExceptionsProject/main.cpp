#include <iostream>
#include "StringUtils.h"
#include "AbilityExceptions.h"
#include "PasswordUtils.h"
#include "VoteUtils.h"

int main() {
  
    try {
        std::cout << "toInt(\"123\"): " << toInt("123") << "\n";
        std::cout << "toInt(\"12abc\"): " << toInt("12abc") << "\n";
    } catch (const std::exception& e) {
        std::cerr << "Ошибка в toInt: " << e.what() << "\n";
    }

    try {
        process();
    } catch (const std::exception& e) {
        std::cerr << "Ошибка из process(): " << e.what() << "\n";
    }

    try {
        checkPassword("short");
    } catch (const std::exception& e) {
        std::cerr << "Ошибка пароля: " << e.what() << "\n";
    }

    try {
        vote("Тор", 16);
    } catch (const AgeException& e) {
        std::cerr << "Ошибка голосования: " << e.what() << "\n";
    }

    return 0;
}
