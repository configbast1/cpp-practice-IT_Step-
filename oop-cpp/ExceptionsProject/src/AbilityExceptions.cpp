#include "AbilityExceptions.h"
#include <stdexcept>
#include <fstream>

void process() {
    try {
        throw std::runtime_error("Ошибка при обработке способности");
    } catch (const std::exception& e) {
        std::ofstream file("log.txt");
        file << e.what();
        throw;
    }
}
