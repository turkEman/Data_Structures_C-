#pragma once
#include "AVL_Node.hpp"

template <typename T>
class AVL_Tree {
private:
    AVL_Node<T>* root;

    int get_height(AVL_Node<T>*);
    int get_balance_factor(AVL_Node<T>*);
    void right_rotate(AVL_Node<T>*&);
    void left_rotate(AVL_Node<T>*&);
    void insert_helper(AVL_Node<T>*&, T);
    void delete_tree(AVL_Node<T>*);

public:
    AVL_Tree();
    ~AVL_Tree();

    void insert(T);
    bool exists(T);
    AVL_Node<T>* get_root() { return root; }
};

#include "AVL_Tree.tpp"
