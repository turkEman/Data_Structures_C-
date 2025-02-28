#pragma once

#include <iostream>

template <typename T>
class MinHeap {
private:
    T *heapArray;
    int capacity;
    int heapSize;
    void resize();
    void swap(T &, T &);

public:
    MinHeap();
    ~MinHeap();
    void insert(T);
    T extractMin();
    void print();
};

template <typename T>
class MaxHeap {
private:
    T *heapArray;
    int capacity;
    int heapSize;
    void resize();
    void swap(T &, T &);

public:
    MaxHeap();
    ~MaxHeap();
    void insert(T);
    T extractMax();
    void print();
};

#include "heap.tpp"