#include "DoublyLinkedList.h"						
#include <iostream>

DoublyLinkedList::Node::Node(int val) : value(val), prev(nullptr), next(nullptr) {}

DoublyLinkedList::DoublyLinkedList() : head(nullptr), tail(nullptr), count(0) {}

DoublyLinkedList::~DoublyLinkedList() {
    clear();
}

void DoublyLinkedList::push_front(int value) {
    Node* newNode = new Node(value);
    newNode->next = head;
    if (head != nullptr) {
        head->prev = newNode;
    }
    head = newNode;
    if (tail == nullptr) {
        tail = head;
    }
    count++;
}

void DoublyLinkedList::push_back(int value) {
    Node* newNode = new Node(value);
    newNode->prev = tail;
    if (tail != nullptr) {
        tail->next = newNode;
    }
    tail = newNode;
    if (head == nullptr) {
        head = tail;
    }
    count++;
} 
void DoublyLinkedList::pop_front() {
    if (head == nullptr) return;
    Node* temp = head;
    head = head->next;
    if (head != nullptr) {
        head->prev = nullptr;
    }
    else {
        tail = nullptr;
    }
    delete temp;
    count--;
}

void DoublyLinkedList::pop_back() {
    if (tail == nullptr) return;
    Node* temp = tail;
    tail = tail->prev;
    if (tail != nullptr) {
        tail->next = nullptr;
    }
    else {
        head = nullptr;
    }
    delete temp;
    count--;
}

void DoublyLinkedList::insert(int position, int value) {
    if (position <= 0) {
        push_front(value);
    }
    else if (position >= count) {
        push_back(value);
    }
    else {
        Node* current = head;
        for (int i = 0; i < position; i++) {
            current = current->next;
        }
        Node* newNode = new Node(value);
        newNode->prev = current->prev;
        newNode->next = current;
        if (current->prev != nullptr) {
            current->prev->next = newNode;
        }
        current->prev = newNode;
        count++;
    }
}

void DoublyLinkedList::erase(int position) {
    if (position < 0 || position >= count) return;

    if (position == 0) {
        pop_front();
    }
    else if (position == count - 1) {
        pop_back();
    }
    else {
        Node* current = head;
        for (int i = 0; i < position; i++) {
            current = current->next;
        }
        current->prev->next = current->next;
        current->next->prev = current->prev;
        delete current;
        count--;
    }
}

int DoublyLinkedList::find(int value) {
    Node* current = head;
    int pos = 0;
    while (current != nullptr) {
        if (current->value == value) {
            return pos;
        }
        current = current->next;
        pos++;
    }
    return -1; 
}

void DoublyLinkedList::clear() {
    while (head != nullptr) {
        pop_front();
    }
}

int DoublyLinkedList::size() const {
    return count;
}

bool DoublyLinkedList::empty() const {
    return count == 0;
}

void DoublyLinkedList::print_forward() const {
    Node* current = head;
    while (current != nullptr) {
        std::cout << current->value << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

void DoublyLinkedList::print_backward() const {
    Node* current = tail;
    while (current != nullptr) {
        std::cout << current->value << " ";
        current = current->prev;
    }
    std::cout << std::endl;
}



