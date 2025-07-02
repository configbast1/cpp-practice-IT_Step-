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
      

};

#endif
