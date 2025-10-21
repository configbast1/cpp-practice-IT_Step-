#include "DoublyLinkedList.h"
#include <iostream>

int main() {
    DoublyLinkedList<int> list;

    list.push_back(10);
    list.push_back(20);
    list.push_back(30);
    list.push_front(5);
    list.insert(2, 15);

    std::cout << "List (forward): ";
    list.print_forward();

    std::cout << "List (backward): ";
    list.print_backward();

    list.erase(2);
    std::cout << "After erase at position 2: ";
    list.print_forward();

    list.pop_front();
    list.pop_back();
    std::cout << "After pop_front and pop_back: ";
    list.print_forward();

    return 0;
}
