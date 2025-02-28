#include "heap.hpp"

int main() {
    MinHeap<int> minHeap;
    MaxHeap<int> maxHeap;

    minHeap.insert(5);
    minHeap.insert(10);
    minHeap.insert(2);

    maxHeap.insert(5);
    maxHeap.insert(10);
    maxHeap.insert(2);

    minHeap.print();
    maxHeap.print();

    std::cout << "MinHeap Extract: " << minHeap.extractMin() << std::endl;
    std::cout << "MaxHeap Extract: " << maxHeap.extractMax() << std::endl;

    return 0;
}
