#pragma once

class Flat {
private:
    double area;
    double price;

public:
    Flat();
    Flat(double a, double p);

    bool operator==(const Flat& other) const;
    Flat& operator=(const Flat& other);
    bool operator>(const Flat& other) const;

    void show() const;
};
