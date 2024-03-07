#include "brandon.h"
#include "hana.h"

int partition(int arr[], int low, int high, long long int &steps) {
    int pivot = arr[high];steps++;
    int i = low - 1;steps++;

    for (int j = low; j < high; ++j) {
        steps++;
        if (arr[j] <= pivot) {
            i++;
            steps++;
            swap(arr[i], arr[j]);
            steps += 3;
        }
    }
steps += 3;
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

// Function to implement quicksort
void quicksort(int arr[], int low, int high, long long int &steps) {
    steps++;
    if (low < high) {
        int pivot_index = partition(arr, low, high, steps);

        quicksort(arr, low, pivot_index - 1, steps);
        quicksort(arr, pivot_index + 1, high, steps);
    }
}



void heapify(int array[], int size, int rootIndex, long long int &steps) {
    int largest = rootIndex;steps++;
    int leftChild = 2 * rootIndex + 1;steps++;
    int rightChild = 2 * rootIndex + 2;steps++;

    // Check if left child is larger than root
    if (leftChild < size && array[leftChild] > array[largest]) {
        steps += 2;
        largest = leftChild;
    }

    // Check if right child is larger than root or left child
    if (rightChild < size && array[rightChild] > array[largest]) {
        steps += 2;
        largest = rightChild;
    }

    // If the largest is not the root, swap and recursively heapify
    if (largest != rootIndex) {
        swap(array[rootIndex], array[largest]);
        steps += 3;
        heapify(array, size, largest, steps);
        steps++;
    }
}
void heapSort(int array[], int size, long long int &steps) {
    // Build a min heap
    for (int i = size / 2 - 1; i >= 0; i--) {
        heapify(array, size, i, steps);
        steps++;
    }

    // Extract elements from the heap one by one
    for (int i = size - 1; i > 0; i--) {
        // Swap the root (minimum element) with the last element
        swap(array[0], array[i]);
        steps += 3;

        // Heapify the reduced heap
        heapify(array, i, 0, steps);
        steps++;
    }
}




