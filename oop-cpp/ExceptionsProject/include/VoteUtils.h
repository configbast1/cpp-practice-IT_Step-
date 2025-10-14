#pragma once
#include <string>
#include <exception>

class AgeException : public std::exception {
    std::string message;

public:
    AgeException(int age);
    const char* what() const noexcept override;
};

void vote(const std::string& candidate, int age);
