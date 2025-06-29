#pragma once

template <class T>
struct TreeNode {
    T data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(T d) : data(d), left(nullptr), right(nullptr) {}
};
