#include "task2.h"
#include "brandon.h"
#include "brian.h"
#include "hana.h"

void averageBubbleSort(int array[],int arraySize, long long int &totalSteps, long long int &totalTime){
    auto start = high_resolution_clock::now();
    bubblesort(array, arraySize, totalSteps);
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    totalTime += duration.count();
}

void averageSelectionSort(int array[],int arraySize, long long int &totalSteps, long long int &totalTime){
    auto start = high_resolution_clock::now();
      SelectionSort(array, arraySize, totalSteps);
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    totalTime += duration.count();
}
void averageInsertionSort(int array[],int arraySize, long long int &totalSteps, long long int &totalTime){
  auto start = high_resolution_clock::now();
      insertionSort(array, arraySize, totalSteps);
  auto stop = high_resolution_clock::now();
  auto duration = duration_cast<microseconds>(stop - start);
  totalTime += duration.count();
}
void averageMergeSort(int array[],int arraySize, long long int &totalSteps, long long int &totalTime){
  auto start = high_resolution_clock::now();
  mergeSort(array, 0, arraySize-1, totalSteps);
  auto stop = high_resolution_clock::now();
  auto duration = duration_cast<microseconds>(stop - start);
  totalTime += duration.count();
}
void averageQuickSort(int array[],int arraySize, long long int &totalSteps, long long int &totalTime){
  auto start = high_resolution_clock::now();
    quicksort(array, 0, arraySize-1, totalSteps);
  auto stop = high_resolution_clock::now();
  auto duration = duration_cast<microseconds>(stop - start);
  totalTime += duration.count();
}
void averageHeapSort(int array[],int arraySize, long long int &totalSteps, long long int &totalTime){
  auto start = high_resolution_clock::now();
  heapSort(array, arraySize, totalSteps);
  auto stop = high_resolution_clock::now();
  auto duration = duration_cast<microseconds>(stop - start);
  totalTime += duration.count();
}

// Function to generate a random permutation of an array
void randomFunction(int randomArray[], int arraySize) {
    // Seed the random number generator with the current time
    srand(time(0));

    // Initialize the array with values in ascending order
    for (int i = 0; i < arraySize; i++) {
        randomArray[i] = i + 1;
    }

    // Fisher-Yates shuffle algorithm to randomly rearrange the array
    for (int i = arraySize - 1; i > 0; --i) {
        // Generate a random index j such that 0 <= j <= i
        int j = rand() % (i + 1);

        // Swap the elements at indices i and j
        swap(randomArray[i], randomArray[j]);
    }
}

void copyRandomArray(int randomArray[], int tempRandom[], int arraySize){
   for(int i = 0; i < arraySize; i++){
     tempRandom[i] = randomArray[i];
   
}
}

void display(int &arraySize, long long int &totalSteps, long long int &totalTime, const string &algo){
  cout << "Total Time taken by " << algo << " for an array with " << arraySize << " values: " << totalTime << " microseconds." << endl;
  cout << "Average Time taken by " << algo << " for an array with " << arraySize << " values: " << totalTime/50 << " microseconds." << endl;
  cout << "Total Steps taken by " << algo << " for an array with " << arraySize << " values: " << totalSteps << " steps." << endl;
  cout << "Average Steps taken by " << algo << " for an array with " << arraySize << " values: " << totalSteps/50 << " steps." << endl;
  cout << endl << endl;
}
