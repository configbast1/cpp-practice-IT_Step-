#pragma once

template <typename T>
class DoublyLinkedList {
private:
    struct Node {
        T value;
        Node* prev;
        Node* next;
        Node(T val) : value(val), prev(nullptr), next(nullptr) {}
    };

    Node* head;
    Node* tail;
    size_t list_size;

public:
    DoublyLinkedList();
    ~DoublyLinkedList();

    void push_front(const T& value);
    void push_back(const T& value);
    void pop_front();
    void pop_back();
    void insert(size_t position, const T& value);
    void erase(size_t position);
    Node* find(const T& value);
    void clear();
    size_t size() const;
    bool empty() const;
    void print_forward() const;
    void print_backward() const;
};
