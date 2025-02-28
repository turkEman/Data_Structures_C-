#pragma once

template <typename T>
class AVL_Node {
private:
    T data;
    int height;
    AVL_Node<T>* left;
    AVL_Node<T>* right;

public:
    AVL_Node(T value);
    ~AVL_Node();

    AVL_Node<T>*& get_left();
    AVL_Node<T>*& get_right();
    
    T get_data() const;
    int get_height() const;

    void set_left(AVL_Node<T>* node);
    void set_right(AVL_Node<T>* node);
    void set_data(T value);
    void set_height(int h);
};

#include "AVL_Node.tpp" 
