#ifndef BITSTRING_H
#define BITSTRING_H

#include "String.h"

class BitString : public String {
public:
    BitString() : String() {}

    BitString(const char* s) : String(s) {
        if (!IsValid()) {
            Clear();
        }
    }

    BitString(const BitString& other) : String(other) {}

    BitString& operator=(const BitString& other) {
        if (this != &other) {
            String::operator=(other);
        }
        return *this;
    }
