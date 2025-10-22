#include "type_utils.h"
namespace ctd {
void printCharFromInt(int number) {
    char* chPtr = reinterpret_cast<char*>(&number);
    std::cout << "Символ из числа: " << *chPtr << std::endl;
}
} 
