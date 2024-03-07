#include "brian.h"

void mergeSort(int a[], int begin, int end, long long int &steps) {
  steps++; // Function entry
  if (begin < end) {
    int mid = (begin + end) / 2;
    mergeSort(a, begin, mid, steps); // Recursive call with step count
    mergeSort(a, mid + 1, end, steps); // Recursive call with step count
    merge(a, begin, mid, end, steps); // Function call with step count
    steps++; // After merge function call
  }
}

void merge(int a[], int begin, int mid, int end, long long int &steps) {
  steps++; // Function entry
  int *b = new int[end - begin + 1]; // Memory allocation
  steps++; // Allocation step

  int i = begin, j = mid + 1, k = 0;
  steps += 3; // Initializations

  while (i <= mid && j <= end) {
    steps+=2; // Loop condition

    if (a[i] < a[j]) {
      
      b[k] = a[i];
      steps += 2; // Assignment and array access
      k++;
      i++;
      steps+=2;
    } else {
      b[k] = a[j];
      steps += 2; // Assignment and array access
      k++;
      j++;
      steps+=2;
    }
    steps+=1;
  }
  

  while (i <= mid) {
    steps+=1;
    b[k] = a[i];
    steps += 2; // Assignment and array access
    k++;
    i++;
    steps+=2;
  }

  while (j <= end) {
    steps += 1;
    b[k] = a[j];
    steps += 2; // Assignment and array access
    k++;
    j++;
    steps += 2;
  }

  for (k = 0, i = begin; i <= end; i++, k++) {
    steps+=3;
    a[i] = b[k];
    steps += 2; // Assignment and array access
    steps+=2;
  }
  steps++; // After copying elements

  delete[] b; // Memory deallocation
  steps++; // Deallocation step
}

void insertionSort(int a[], int n, long long int &steps) {
  for (int i = 1; i <= n - 1; i++) {
    steps++;
    int temp = a[i];
    steps++;
    int j = i - 1;
    steps += 2;
    while (j >= 0 && a[j] > temp) {
        steps++;
      a[j + 1] = a[j];
      steps += 2;
      j--;
      steps++;

    }
    a[j + 1] = temp;
    steps += 2;
  }
}