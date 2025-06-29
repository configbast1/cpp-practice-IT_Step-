#pragma once
#include "TreeNode.h"
#include <iostream>
using namespace std;

template <class T>
class BinaryTree {
private:
    TreeNode<T>* root;

    void insert(TreeNode<T>*& node, T data);
    void inOrder(TreeNode<T>* node);

public:
    BinaryTree() : root(nullptr) {}
    void Insert(T data) { insert(root, data); }
    void PrintInOrder() { inOrder(root); }
};

template <class T>
void BinaryTree<T>::insert(TreeNode<T>*& node, T data) {
    if (!node) {
        node = new TreeNode<T>(data);
    } else if (data.eng < node->data.eng) { 
        insert(node->left, data);
    } else {
        insert(node->right, data);
    }
}

template <class T>
void BinaryTree<T>::inOrder(TreeNode<T>* node) {
    if (node) {
        inOrder(node->left);
        cout << node->data.eng << " : " << node->data.rus << " [" << node->data.counter << "]" << endl;
        inOrder(node->right);
    }
}
