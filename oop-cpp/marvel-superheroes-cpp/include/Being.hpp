#pragma once
#include <string>

class Being {
public:
    virtual std::string getRace() const = 0;
    virtual ~Being() {}
};

class Human : public Being {
public:
    std::string getRace() const override { return "Human"; }
};

class Animal : public Being {
public:
    std::string getRace() const override { return "Animal"; }
};

class God : public Being {
public:
    std::string getRace() const override { return "God"; }
};
