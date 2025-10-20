#pragma once
#include <string>

class Alignment {
public:
    virtual std::string getSide() const = 0;
    virtual ~Alignment() {}
};

class Good : public Alignment {
public:
    std::string getSide() const override { return "Good"; }
};

class Evil : public Alignment {
public:
    std::string getSide() const override { return "Evil"; }
};
