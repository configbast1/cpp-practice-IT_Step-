#include "DoublyLinkedList.h"
#include <iostream>

template <typename T>
DoublyLinkedList<T>::DoublyLinkedList() : head(nullptr), tail(nullptr), list_size(0) {}

template <typename T>
DoublyLinkedList<T>::~DoublyLinkedList() {
    clear();
}

template <typename T>
void DoublyLinkedList<T>::push_front(const T& value) {
    Node* new_node = new Node(value);
    if (head) {
        new_node->next = head;
        head->prev = new_node;
        head = new_node;
    } else {
        head = tail = new_node;
    }
    ++list_size;
}

template <typename T>
void DoublyLinkedList<T>::push_back(const T& value) {
    Node* new_node = new Node(value);
    if (tail) {
        new_node->prev = tail;
        tail->next = new_node;
        tail = new_node;
    } else {
        head = tail = new_node;
    }
    ++list_size;
}

template <typename T>
void DoublyLinkedList<T>::pop_front() {
    if (head) {
        Node* temp = head;
        head = head->next;
        if (head) head->prev = nullptr;
        else tail = nullptr;
        delete temp;
        --list_size;
    }
}

template <typename T>
void DoublyLinkedList<T>::pop_back() {
    if (tail) {
        Node* temp = tail;
        tail = tail->prev;
        if (tail) tail->next = nullptr;
        else head = nullptr;
        delete temp;
        --list_size;
    }
}

template <typename T>
void DoublyLinkedList<T>::insert(size_t position, const T& value) {
    if (position > list_size) return;
    if (position == 0) {
        push_front(value);
        return;
    }
    if (position == list_size) {
        push_back(value);
        return;
    }

    Node* new_node = new Node(value);
    Node* current = head;
    for (size_t i = 0; i < position; ++i) {
        current = current->next;
    }
    new_node->prev = current->prev;
    new_node->next = current;
    current->prev->next = new_node;
    current->prev = new_node;
    ++list_size;
}

template <typename T>
void DoublyLinkedList<T>::erase(size_t position) {
    if (position >= list_size) return;
    if (position == 0) {
        pop_front();
        return;
    }
    if (position == list_size - 1) {
        pop_back();
        return;
    }

    Node* current = head;
    for (size_t i = 0; i < position; ++i) {
        current = current->next;
    }
    current->prev->next = current->next;
    if (current->next) current->next->prev = current->prev;
    delete current;
    --list_size;
}

template <typename T>
typename DoublyLinkedList<T>::Node* DoublyLinkedList<T>::find(const T& value) {
    Node* current = head;
    while (current) {
        if (current->value == value) return current;
        current = current->next;
    }
    return nullptr;
}

template <typename T>
void DoublyLinkedList<T>::clear() {
    while (head) {
        pop_front();
    }
}

template <typename T>
size_t DoublyLinkedList<T>::size() const {
    return list_size;
}

template <typename T>
bool DoublyLinkedList<T>::empty() const {
    return list_size == 0;
}

template <typename T>
void DoublyLinkedList<T>::print_forward() const {
    Node* current = head;
    while (current) {
        std::cout << current->value << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

template <typename T>
void DoublyLinkedList<T>::print_backward() const {
    Node* current = tail;
    while (current) {
        std::cout << current->value << " ";
        current = current->prev;
    }
    std::cout << std::endl;
}

// Не забудьте явно инстанцировать шаблонный класс для нужных типов
template class DoublyLinkedList<int>;
