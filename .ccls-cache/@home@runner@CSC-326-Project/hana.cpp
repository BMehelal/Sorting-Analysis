#include "hana.h"

void swap(int &n, int &n1){
    int temp = n;
    n = n1;
    n1 = temp;
}

void SelectionSort(int a[], int n, long long int &steps) {
  // Outer loop
  int i = 0;
  steps++;
  for (; i < n - 1; ++i) {
    steps += 2; // Loop condition and increment

    // Initialize large index
    int large = 0;
    steps += 1; // Initialization

    // Inner loop
    int j = 1;
    steps++;
    for (;j < n - i; ++j) {
      steps += 2; // Loop condition and increment

      // Comparison
      if (a[j] > a[large]) {
        steps += 1;

        // Update large index
        large = j;
        steps += 1;
      }
    }

    // Swap element at large index with last element
    swap(a[large], a[n - i - 1]);
    steps += 3; // Swap function call and two assignments
  }
}

void bubblesort(int a[], int n, long long int &steps) {
  // Initialization of variables and swapped flag
  int i = 0;
  int j = 0;
  bool swapped = true;
  steps += 3; // Initializations of i, j, and swapped

  // Outer loop
  for (; i < n - 1 && swapped; ++i) {
    swapped = false;
    steps += 3; // Loop condition, increment, and assignment

    // Inner loop
    for (j = 0; j < n - 1 - i; ++j) {
      steps += 2; // Loop condition and increment

      // Comparison
      if (a[j] > a[j + 1]) {
        // Swap and update swapped flag
        swap(a[j], a[j + 1]);
        swapped = true;
        steps += 3; // Comparison, swap, and assignment
      } else {
        steps += 1; // Comparison
      }
    }
  }
}
