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
