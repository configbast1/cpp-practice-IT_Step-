#include "../include/Fraction.h"
#include <iostream>
#include <cmath>
using namespace std;

int Fraction::count = 0;

int Fraction::gcd(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

void Fraction::reduce() {
    if (denominator == 0) return; 
    int d = gcd(abs(numerator), abs(denominator));
    numerator /= d;
    denominator /= d;
}

Fraction::Fraction() : Fraction(0, 1) {}

Fraction::Fraction(int num) : Fraction(num, 1) {}

Fraction::Fraction(int num, int den) : numerator(num), denominator(den) {
    reduce();
    count++;
}

Fraction::Fraction(const Fraction& other)
    : numerator(other.numerator), denominator(other.denominator) {
    count++;
}

Fraction::~Fraction() {
    count--;
}

void Fraction::Print() const {
    std::cout << numerator << "/" << denominator << '\n';
}
void Fraction::AddFraction(const Fraction& other) {
    numerator = numerator * other.denominator + other.numerator * denominator;
    denominator *= other.denominator;
    reduce();
}
void Fraction::SubFraction(const Fraction& other) {
    numerator = numerator * other.denominator - other.numerator * denominator;
    denominator *= other.denominator;
    reduce();
}
void Fraction::MulFraction(const Fraction& other) {
    numerator *= other.numerator;
    denominator *= other.denominator;
    reduce();
} 
void Fraction::AddInt(int number) {
    numerator += number * denominator;
    reduce();
}
void Fraction::SubInt(int number) {
    numerator -= number * denominator;
    reduce();
}
void Fraction::MulInt(int number) {
    numerator *= number;
    reduce();
}
int Fraction::GetCount() {
    return count;
}
