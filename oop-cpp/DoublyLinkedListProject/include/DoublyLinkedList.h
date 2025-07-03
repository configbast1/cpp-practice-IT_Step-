#ifndef DOUBLYLINKEDLIST_H
#define DOUBLYLINKEDLIST_H

class DoublyLinkedList {
private:
    struct Node {
        int value;
        Node* prev;
        Node* next;

        Node(int val);
    };

    Node* head;
    Node* tail;
    int count;

public:
    DoublyLinkedList();
    ~DoublyLinkedList();

    void push_front(int value);
    void push_back(int value);
    void pop_front();
    void pop_back();
    void insert(int position, int value);
    void erase(int position);
    int find(int value);
    void clear();
    int size() const;
    bool empty() const;
    void print_forward() const;
    void print_backward() const;
};

#endif
