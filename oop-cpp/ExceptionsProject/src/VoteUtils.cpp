#include "VoteUtils.h"

AgeException::AgeException(int age) {
    message = "Возраст меньше 18: " + std::to_string(age);
}

const char* AgeException::what() const noexcept {
    return message.c_str();
}

void vote(const std::string& candidate, int age) {
    if (age < 18) throw AgeException(age);
    std::cout << "Вы проголосовали за: " << candidate << "\n";
}
