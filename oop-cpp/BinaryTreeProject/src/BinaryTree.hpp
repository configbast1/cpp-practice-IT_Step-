#pragma once
#include <iostream>
using namespace std;

template <class T>
BinaryTree<T>::BinaryTree() {
    root = nullptr;
}

template <class T>
void BinaryTree<T>::Insert(T data) {
    insert(root, data);
}

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
void BinaryTree<T>::PrintInOrder() {
}
