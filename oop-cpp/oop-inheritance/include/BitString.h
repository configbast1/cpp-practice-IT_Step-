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

 ~BitString() {}

    bool IsValid() const {
        for (int i = 0; i < length; ++i) {
            if (str[i] != '0' && str[i] != '1') return false;
        }
        return true;
    }

    void InvertSign() {
        for (int i = 0; i < length; ++i) {
            str[i] = (str[i] == '0') ? '1' : '0';
        }
    }

    BitString operator+(const BitString& other) const {
        BitString result(*this);
        result += other;
        return result;
    }
