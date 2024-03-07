#include "brian.h"

void mergeSort(int a[], int begin, int end, long long int &steps) {
    steps++;
  if (begin < end) {
    int mid = (begin + end) / 2;
    mergeSort(a, begin, mid, steps);
    mergeSort(a, mid + 1, end,steps);
    merge(a, begin, mid, end,steps);
    steps++;
  }
}
void merge(int a[], int begin, int mid, int end, long long int &steps) {
  int *b = new int[end - begin + 1];
  steps++;
  int i = begin, j = mid + 1, k = 0;
  steps += 3;
  while (i <= mid && j <= end) {
    steps++;
    if (a[i] < a[j]) {
      b[k] = a[i];
      steps += 2;
      k++;
      i++;
    } else {
      b[k] = a[j];
      steps += 2;
      k++;
      j++;
    }
  }
  while (i <= mid) {
    b[k] = a[i];
    steps += 2;
    k++;
    i++;
  }
  while (j <= end) {
    b[k] = a[j];
    steps += 2;
    k++;
    j++;
  }
  for (k = 0, i = begin; i <= end; i++, k++) {
    a[i] = b[k];
    steps += 2;
  }
  steps++;
  delete[] b;
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