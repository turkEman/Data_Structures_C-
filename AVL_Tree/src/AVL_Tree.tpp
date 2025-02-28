#include "AVL_Tree.hpp"

template <typename T>
AVL_Tree<T>::AVL_Tree() : root(nullptr) {}

template <typename T>
void AVL_Tree<T>::delete_tree(AVL_Node<T>* node) {
    if (node == nullptr) return;
    delete_tree(node->get_left());
    delete_tree(node->get_right());
    delete node;
}

template <typename T>
AVL_Tree<T>::~AVL_Tree() {
    delete_tree(root);
}

template <typename T>
int AVL_Tree<T>::get_height(AVL_Node<T>* node) {
    return node ? node->get_height() : 0;
}

template <typename T>
int AVL_Tree<T>::get_balance_factor(AVL_Node<T>* node) {
    return node ? get_height(node->get_left()) - get_height(node->get_right()) : 0;
}

template <typename T>
void AVL_Tree<T>::right_rotate(AVL_Node<T>*& current) {
    AVL_Node<T>* left_of_current = current->get_left();
    AVL_Node<T>* t2 = left_of_current->get_right();

    left_of_current->set_right(current);
    current->set_left(t2);

    current->set_height(std::max(get_height(current->get_left()), get_height(current->get_right())) + 1);
    left_of_current->set_height(std::max(get_height(left_of_current->get_left()), get_height(left_of_current->get_right())) + 1);

    current = left_of_current;
}

template <typename T>
void AVL_Tree<T>::left_rotate(AVL_Node<T>*& current) {
    AVL_Node<T>* right_of_current = current->get_right();
    AVL_Node<T>* t2 = right_of_current->get_left();

    right_of_current->set_left(current);
    current->set_right(t2);

    current->set_height(std::max(get_height(current->get_left()), get_height(current->get_right())) + 1);
    right_of_current->set_height(std::max(get_height(right_of_current->get_left()), get_height(right_of_current->get_right())) + 1);

    current = right_of_current;
}

template <typename T>
void AVL_Tree<T>::insert_helper(AVL_Node<T>*& node, T data) {
    if (node == nullptr) {
        node = new AVL_Node<T>(data);
        return;
    }

    if (data < node->get_data()) {
        insert_helper(node->get_left(), data);
    } else if (data > node->get_data()) {
        insert_helper(node->get_right(), data);
    } else {
        return; // Duplicate value, do nothing
    }

    node->set_height(1 + std::max(get_height(node->get_left()), get_height(node->get_right())));
    int balance = get_balance_factor(node);

    // LL
    if (balance > 1 && data < node->get_left()->get_data()) {
        right_rotate(node);
    }
    // RR
    else if (balance < -1 && data > node->get_right()->get_data()) {
        left_rotate(node);
    }
    // LR
    else if (balance > 1 && data > node->get_left()->get_data()) {
        left_rotate(node->get_left());
        right_rotate(node);
    }
    // RL
    else if (balance < -1 && data < node->get_right()->get_data()) {
        right_rotate(node->get_right());
        left_rotate(node);
    }
}

template <typename T>
void AVL_Tree<T>::insert(T data) {
    insert_helper(root, data);
}

template <typename T>
bool AVL_Tree<T>::exists(T data) {
    AVL_Node<T>* current = root;
    while (current) {
        if (data < current->get_data()) {
            current = current->get_left();
        } else if (data > current->get_data()) {
            current = current->get_right();
        } else {
            return true;
        }
    }
    return false;
}
