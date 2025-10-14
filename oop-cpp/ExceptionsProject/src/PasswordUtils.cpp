#include "PasswordUtils.h"
#include <stdexcept>
#include <cctype>

void checkPassword(const std::string& password) {
    if (password.size() < 8)
        throw std::invalid_argument("Пароль слишком короткий");

    for (char ch : password) {
        if (isdigit(ch)) return;
    }

    throw std::invalid_argument("Пароль должен содержать хотя бы одну цифру");
}
