#ifndef BITSTRING_H
#define BITSTRING_H

#include "String.h"

class BitString : public String {
public: 
      BitString();
      BitString(const char* str);
      BitString(const BitString& other);
      BitString& operator=(const BitString& other); 
      ~BitString();
      void ChangeSign(); 
      BitString operator+(const BitString& other) const;
      BitString& operator+=(const BitString& other); 
      bool operator==(const BitString& other) const;
      bool operator!=(const BitString& other) const;
      void print() const;
};

#endif
