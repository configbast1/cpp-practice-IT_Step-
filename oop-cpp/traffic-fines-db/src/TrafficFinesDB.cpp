#include "TrafficFinesDB.h"

TrafficFinesDB::TrafficFinesDB() : root(nullptr) {}

TrafficFinesDB::~TrafficFinesDB() {
    clear();
}

TrafficFinesDB::Node* TrafficFinesDB::insert(Node* node, const std::string& car_number, const std::string& violation) {
    if (!node) {
        node = new Node(car_number);
        node->violations.push_back(violation);
        return node;
    }
    if (car_number < node->car_number) {
        node->left = insert(node->left, car_number, violation);
    } else if (car_number > node->car_number) {
        node->right = insert(node->right, car_number, violation);
    } else {
        node->violations.push_back(violation);
    }
    return node;
}

void TrafficFinesDB::insert(const std::string& car_number, const std::string& violation) {
    root = insert(root, car_number, violation);
}

TrafficFinesDB::Node* TrafficFinesDB::find(Node* node, const std::string& car_number) {
    if (!node || node->car_number == car_number) {
        return node;
    }
    if (car_number < node->car_number) {
        return find(node->left, car_number);
    }
    return find(node->right, car_number);
}

void TrafficFinesDB::print(Node* node) const {
    if (node) {
        print(node->left);
        std::cout << "Car Number: " << node->car_number << "\nViolations: ";
        for (const auto& violation : node->violations) {
            std::cout << violation << ", ";
        }
        std::cout << "\n";
        print(node->right);
    }
}

void TrafficFinesDB::print_all() const {
    print(root);
}

void TrafficFinesDB::print_by_number(const std::string& car_number) const {
    Node* node = find(root, car_number);
    if (node) {
        std::cout << "Car Number: " << node->car_number << "\nViolations: ";
        for (const auto& violation : node->violations) {
            std::cout << violation << ", ";
        }
        std::cout << "\n";
    } else {
        std::cout << "No record found for car number: " << car_number << "\n";
    }
}

void TrafficFinesDB::print_by_range(Node* node, const std::string& start, const std::string& end) const {
    if (node) {
        if (start < node->car_number) {
            print_by_range(node->left, start, end);
        }
        if (start <= node->car_number && node->car_number <= end) {
            std::cout << "Car Number: " << node->car_number << "\nViolations: ";
            for (const auto& violation : node->violations) {
                std::cout << violation << ", ";
            }
            std::cout << "\n";
        }
        if (end > node->car_number) {
            print_by_range(node->right, start, end);
        }
    }
}

void TrafficFinesDB::print_by_range(const std::string& start, const std::string& end) const {
    print_by_range(root, start, end);
}

void TrafficFinesDB::clear() {
    // Implement tree deletion logic here
}
