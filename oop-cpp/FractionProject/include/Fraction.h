#ifndef FRACTION_H
#define FRACTION_H

class Fraction {
private:
    int numerator;     
    int denominator;   
    static int count;  

    int gcd(int a, int b);

    void reduce(); 

public:
    Fraction();                          
    Fraction(int num);                  
    Fraction(int num, int den);         
    Fraction(const Fraction& other);    

    ~Fraction();                        

    void Print() const;

    void AddFraction(const Fraction& other);
    void SubFraction(const Fraction& other);
    void MulFraction(const Fraction& other);

    void AddInt(int number);
    void SubInt(int number);
    void MulInt(int number);

    static int GetCount(); 
};

#endif
