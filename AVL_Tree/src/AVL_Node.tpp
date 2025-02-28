#include <algorithm>

// Constructor
template <typename T>
AVL_Node<T>::AVL_Node(T value) : data(value), height(1), left(nullptr), right(nullptr) {}

// Destructor
template <typename T>
AVL_Node<T>::~AVL_Node() {}

template <typename T>
AVL_Node<T>*& AVL_Node<T>::get_left() { return left; }

template <typename T>
AVL_Node<T>*& AVL_Node<T>::get_right() { return right; }


template <typename T>
T AVL_Node<T>::get_data() const { return data; }

template <typename T>
int AVL_Node<T>::get_height() const { return height; }

// Setters
template <typename T>
void AVL_Node<T>::set_left(AVL_Node<T>* node) { left = node; }

template <typename T>
void AVL_Node<T>::set_right(AVL_Node<T>* node) { right = node; }

template <typename T>
void AVL_Node<T>::set_data(T value) { data = value; }

template <typename T>
void AVL_Node<T>::set_height(int h) { height = h; }
