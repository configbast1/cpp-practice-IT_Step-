#include <iostream>
#include "include/Word.h"
#include "include/Bus.h"
#include "include/BinaryTree.h"

using namespace std;

int main() {
    BinaryTree<Word> dict;
    dict.Insert(Word("apple", "яблоко"));
    dict.Insert(Word("banana", "банан"));
    dict.Insert(Word("cherry", "вишня"));

    dict.PrintInOrder();

    BinaryTree<Bus> park;
    park.Insert(Bus(101, "Ivanov I.I.", "Route 1", 30));
    park.Insert(Bus(55, "Petrov P.P.", "Route 2", 40));
    park.Insert(Bus(78, "Sidorov S.S.", "Route 3", 25));

    return 0;
}
