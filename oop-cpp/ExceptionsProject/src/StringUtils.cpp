#include "StringUtils.h"
#include <stdexcept>

int toInt(const std::string& s) {
    try {
        size_t pos;
        int value = std::stoi(s, &pos);
        if (pos != s.size()) throw std::invalid_argument("Некорректное число");
        return value;
    } catch (...) {
        throw std::invalid_argument("Некорректная строка");
    }
}
