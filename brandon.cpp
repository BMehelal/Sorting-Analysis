#include "brandon.h"
#include "hana.h"

int partition(int arr[], int low, int high, long long int &steps) {
  // Function entry
  steps++;

  // Select pivot and initialize variables
  int pivot = arr[high];
  int i = low - 1;
  steps += 2;

  // Loop to partition elements
  int j = low; 
  steps++;
  for (; j < high; ++j) {
    steps++; // Loop condition

    // Comparison with pivot
    if (arr[j] <= pivot) {
      // Increment index and swap elements
      i++;
      swap(arr[i], arr[j]);
      steps += 3; // Increment, swap, and two array accesses
    }
  }

  // Swap pivot element
  swap(arr[i + 1], arr[high]);
  steps += 3; // Swap, increment, and two array accesses

  // Return pivot index
  return i + 1;
}


void quicksort(int arr[], int low, int high, long long int &steps) {
  // Function entry
  steps++;

  // Check for base case
  if (low < high) {
    // Get pivot index
    int pivot_index = partition(arr, low, high, steps); // Recursive call with step count

    // Sort sub-arrays
    quicksort(arr, low, pivot_index - 1, steps); // Recursive call with step count
    quicksort(arr, pivot_index + 1, high, steps); // Recursive call with step count
  }
}




void heapify(int array[], int size, int rootIndex, long long int &steps) {
  // Function entry
  steps++;

  // Initialize variables
  int largest = rootIndex;
  int leftChild = 2 * rootIndex + 1;
  int rightChild = 2 * rootIndex + 2;
  steps += 3;

  // Check if left child exists and is larger than root
  if (leftChild < size && array[leftChild] > array[largest]) {
    steps += 2;
    largest = leftChild; steps++;
  }

  // Check if right child exists and is larger than root or left child
  if (rightChild < size && array[rightChild] > array[largest]) {
    steps += 2;
    largest = rightChild;
    steps++;
  }

  // Swap and recursively heapify if largest is not root
  if (largest != rootIndex) {
    steps++;
    swap(array[rootIndex], array[largest]);
    steps += 3;
    heapify(array, size, largest, steps); // Recursive call with step count
    steps++;
  }
}

void heapSort(int array[], int size, long long int &steps) {
    // Build a min heap
    for (int i = size / 2 - 1; i >= 0; i--) {
      steps+=2;
        heapify(array, size, i, steps);
        steps++;
    }

    // Extract elements from the heap one by one
    for (int i = size - 1; i > 0; i--) {
      steps+=2;
        // Swap the root (minimum element) with the last element
        swap(array[0], array[i]);
        steps += 3;

        // Heapify the reduced heap
        heapify(array, i, 0, steps);
        steps++;
    }
}




