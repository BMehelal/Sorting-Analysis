#include "hana.h"

void swap(int &n, int &n1){
    int temp = n;
    n = n1;
    n1 = temp;
}

void SelectionSort(int a[], int n, long long int &steps) {
  for (int i = 0; i < n - 1; i++) {
    steps++;
    int large = 0;
    steps += 4;

    for (int j = 1; j < n - i; j++) {
      steps++;
      if (a[j] > a[large]){
        steps++;
        large = j;
        steps++;
    }
    swap(a[large], a[n - i - 1]);
    steps += 3;

  }
}
}
void bubblesort(int a[], int n, long long int &steps) {
  for (int i = 0; i < n - 1; i++) {
      steps++;
      for (int j = 0; j < n - i - 1; j++){ // Corrected condition
          steps++;
          if (a[j] > a[j + 1]){
              steps += 3;
              swap(a[j], a[j + 1]);
            }
    }
  }
}