#include "AVL_Tree.hpp"

int main() {
    AVL_Tree<int> tree;

    tree.insert(50);
    tree.insert(30);
    tree.insert(70);
    tree.insert(20);
    tree.insert(40);

    std::cout << "Exists(30): " << tree.exists(30) << std::endl; // Output: 1 (true)
    std::cout << "Exists(100): " << tree.exists(100) << std::endl; // Output: 0 (false)

    return 0;
}
