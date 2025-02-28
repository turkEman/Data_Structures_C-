# Data Structures in C++

This repository contains implementations of fundamental data structures in C++, including **Heaps** and **AVL Trees**. Each data structure is organized in its own folder with source code and CMake support for easy compilation.

## 📂 Project Structure
```
Data_Structures_C-/
│── AVL_Tree/
│   ├── src/
│   │   ├── main.cpp
│   │   ├── AVL_Node.hpp
│   │   ├── AVL_Tree.hpp
│   │   ├── AVL_Tree.tpp
│   │   ├── CMakeLists.txt
│   ├── README.md
│
│── Heap/
│   ├── src/
│   │   ├── main.cpp
│   │   ├── MinHeap.hpp
│   │   ├── MaxHeap.hpp
│   │   ├── CMakeLists.txt
│   ├── README.md
│
│── README.md
```

## 📌 Implemented Data Structures

### ✅ **Heap**
- Implements **Min Heap** and **Max Heap** using arrays.
- Supports insert, delete, and heapify operations.

### ✅ **AVL Tree**
- A self-balancing binary search tree.
- Supports insertion, deletion, and rotations to maintain balance.

## 🚀 How to Build and Run
This project uses **CMake** for building. Follow these steps:

1. **Clone the repository**  
   ```sh
   git clone https://github.com/turkEman/Data_Structures_C-.git
   cd Data_Structures_C-
   ```

2. **Build AVL Tree**  
   ```sh
   cd AVL_Tree
   mkdir build && cd build
   cmake ..
   cmake --build .
   ./avl_tree  # Run the executable
   ```

3. **Build Heap**  
   ```sh
   cd ../../Heap
   mkdir build && cd build
   cmake ..
   cmake --build .
   ./heap  # Run the executable
   ```

## 🔧 Requirements
- C++17 or later
- CMake 3.10 or later
- A C++ compiler (e.g., g++, clang, MSVC)

## 📜 License
This project is open-source under the **MIT License**.

---
