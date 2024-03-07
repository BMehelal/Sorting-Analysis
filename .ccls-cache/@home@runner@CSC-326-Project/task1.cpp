#include "task1.h"
#include "brandon.h"
#include "brian.h"
#include "hana.h"



void initializeArray(int randomArray[], int ascArray[], int dscArray[], int arraySize){
  for(int i = 0; i < arraySize; i++){
    ascArray[i] = i+1;
  }
  for (int i = arraySize - 1; i >= 0; i--) {
        dscArray[arraySize - 1 - i] = i + 1;
    }
  srand(time(0));

    for (int i = 0; i < arraySize; i++) {
        randomArray[i] = i + 1;
    }

    // Fisher-Yates shuffle algorithm
    for (int i = arraySize - 1; i > 0; --i) {
        int j = rand() % (i + 1);
        swap(randomArray[i], randomArray[j]);
    }


}

void runBubbleSort(int array[], int arraySize, const string &arrayType) {
  long long int steps = 0;
  auto start = high_resolution_clock::now();
  bubblesort(array, arraySize, steps);
  auto stop = high_resolution_clock::now();
  auto duration = duration_cast<microseconds>(stop - start);
  cout << "Time taken by Bubble Sort for a " << arrayType << " array with " << arraySize << " values: " << duration.count() << " microseconds." << endl;
    cout << "Steps taken by Bubble Sort for a " << arrayType << " array with " << arraySize << " values: " << steps << " steps." << endl;


  return;
}

void copyArray(int randomArray[], int ascArray[], int dscArray[], int tempRandom[], int tempASC[],int tempDSC[], int arraySize){
   for(int i = 0; i < arraySize; i++){
     tempRandom[i] = randomArray[i];
   }
  for(int i = 0; i < arraySize; i++){
       tempASC[i] = ascArray[i];
   }
  for(int i = 0; i < arraySize; i++){
       tempDSC[i] = dscArray[i];
   }
}

void runSelectionSort(int array[], int arraySize, const string &arrayType){
  long long int steps = 0;
  auto start = high_resolution_clock::now();
  SelectionSort(array, arraySize, steps);
  auto stop = high_resolution_clock::now();
  auto duration = duration_cast<microseconds>(stop - start);
  cout << "Time taken by Selection Sort for a " << arrayType << " array with " << arraySize << " values: " << duration.count() << " microseconds." << endl;
    cout << "Steps taken by Selection Sort for a " << arrayType << " array with " << arraySize << " values: " << steps << " steps." << endl;
}

void runInsertionSort(int array[], int arraySize, const string &arrayType){
  long long int steps = 0;
  auto start = high_resolution_clock::now();
    insertionSort(array, arraySize, steps);
  auto stop = high_resolution_clock::now();
  auto duration = duration_cast<microseconds>(stop - start);
  cout << "Time taken by Insertion Sort for a " << arrayType << " array with " << arraySize << " values: " << duration.count() << " microseconds." << endl;
    cout << "Steps taken by Insertion Sort for a " << arrayType << " array with " << arraySize << " values: " << steps << " steps." << endl;
}

void runMergeSort(int array[], int arraySize, const string &arrayType){
  long long int steps = 0;
  auto start = high_resolution_clock::now();
    mergeSort(array, 0, arraySize-1, steps);
  auto stop = high_resolution_clock::now();
  auto duration = duration_cast<microseconds>(stop - start);
  cout << "Time taken by Merge Sort for a " << arrayType << " array with " << arraySize << " values: " << duration.count() << " microseconds." << endl;
    cout << "Steps taken by Merge Sort for a " << arrayType << " array with " << arraySize << " values: " << steps << " steps." << endl;
}

void runQuickSort(int array[], int arraySize, const string &arrayType){
  long long int steps = 0;
  auto start = high_resolution_clock::now();
      quicksort(array, 0, arraySize-1, steps);
  auto stop = high_resolution_clock::now();
  auto duration = duration_cast<microseconds>(stop - start);
  cout << "Time taken by Quick Sort for a " << arrayType << " array with " << arraySize << " values: " << duration.count() << " microseconds." << endl;
    cout << "Steps taken by Quick Sort for a " << arrayType << " array with " << arraySize << " values: " << steps << " steps." << endl;
}

void runHeapSort(int array[], int arraySize, const string &arrayType){
  long long int steps = 0;
  auto start = high_resolution_clock::now();
        heapSort(array, arraySize, steps);
  auto stop = high_resolution_clock::now();
  auto duration = duration_cast<microseconds>(stop - start);
  cout << "Time taken by Heap Sort for a " << arrayType << " array with " << arraySize << " values: " << duration.count() << " microseconds." << endl;
    cout << "Steps taken by Heap Sort for a " << arrayType << " array with " << arraySize << " values: " << steps << " steps." << endl;
}

void cleanup(int randomArray[], int ascArray[], int dscArray[], int tempRandom[], int tempASC[], int tempDSC[]) {
    delete[] randomArray;
    delete[] ascArray;
    delete[] dscArray;
    delete[] tempRandom;
    delete[] tempASC;
    delete[] tempDSC;
}