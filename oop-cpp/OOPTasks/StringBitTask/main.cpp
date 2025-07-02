#include <iostream>
#include "include/String.h"

int main() {
    String str1;
    str1.print(); 

String str2("Hello");
    str2.print(); 

String str3(str2);
    str3.print();

str1 = str2;
    str1.print(); 
