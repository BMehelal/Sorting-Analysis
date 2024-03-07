#include "brandon.h"


void quicksort(int a[], int begin, int end, long long int& steps){
  if(begin < end){
    
    int p = parition(a, begin, end, steps);
    quicksort(a, begin, p-1, steps);
    quicksort(a, p+1, begin, steps);
  }
}

int parition(int a[], int begin, int end, long long int&steps){
  int pivot = a[begin];
  int i = begin-1;
  int j = end+1;

  while(true){
    do{
      i++;
      
    }while(a[i]< pivot);
    do{
      j++;
    
    }while(a[j]>pivot);
    if(i >= j){
      return j;
    }
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
  }
}

void heapify(int a[], int i, int size, long long int &steps){
  int largest  =  i; 
  int l = 2*i+1;
  int r = 2*i+2;
  if (l < size && a[l] > a[largest]){
    largest = l;
  }

  if (r < size && a[r] > a[largest]){
  
    largest = r;
  }

  if (largest != i) {
  int temp = a[i];
  a[i] = a[largest];
  a[largest]  = temp;
    
    // Recursively heapify the affected
    // sub-tree
    heapify(a, size, largest, steps);
}
}

void heapSort(int a[], int size)
{

    // Build heap (rearrange array)
    for (int i = size / 2 - 1; i >= 0; i--)
        heapify(a, i,size, steps);

    // One by one extract an element
    // from heap
    for (int i = size - 1; i > 0; i--) {

        // Move current root to end
      int temp = a[0];
      a[0] = a[i];
      a[i] =temp;
        

        // call max heapify on the reduced heap
        heapify(a, i, 0);
    }
}



