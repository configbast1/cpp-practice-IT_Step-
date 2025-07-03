#include <iostream>
#include "DoublyLinkedList.h"
#include  "Windows.h" 

int main() { 
	
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
    DoublyLinkedList list;

    list.push_back(1);
    list.push_back(2);
    list.push_back(3);

    std::cout << "Прямой вывод: ";
    list.print_forward();    

    std::cout << "Обратный вывод: ";
    list.print_backward();   
    list.push_front(0);
    std::cout << "После push_front: ";
    list.print_forward();   

    list.insert(2, 5);
    std::cout << "После insert(2, 5): ";
    list.print_forward();    

    list.erase(2);
    std::cout << "После erase(2): ";
    list.print_forward();   

    std::cout << "Найти 2: " << list.find(2) << std::endl;

    list.pop_front();
    list.pop_back();
    std::cout << "После pop_front и pop_back: ";
    list.print_forward();    

    list.clear();
    std::cout << "Размер после clear: " << list.size() << std::endl;

    return 0;
