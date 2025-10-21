#pragma once
#include <string>
#include <vector>
#include <iostream>

class TrafficFinesDB {
private:
    struct Node {
        std::string car_number;
        std::vector<std::string> violations;
        Node* left;
        Node* right;
        Node(const std::string& number) : car_number(number), left(nullptr), right(nullptr) {}
    };

    Node* root;

    Node* insert(Node* node, const std::string& car_number, const std::string& violation);
    Node* find(Node* node, const std::string& car_number);
    void print(Node* node) const;
    void print_range(Node* node, const std::string& start, const std::string& end) const;

public:
    TrafficFinesDB();
    ~TrafficFinesDB();
    void insert(const std::string& car_number, const std::string& violation);
    void print_all() const;
    void print_by_number(const std::string& car_number) const;
    void print_by_range(const std::string& start, const std::string& end) const;
    void clear();
};
