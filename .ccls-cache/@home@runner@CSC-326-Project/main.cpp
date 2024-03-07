#include "task1.h"
#include "task2.h"

int inputDataSize();
int counter = 1;

int main() {
  int choice;
  cout << "Task 1 or Task 2(Enter '1' or '2'): ";
  cin >> choice;
  // Enter 1 for Task 1
  if(choice == 1){
    for(int index = 1; index <= 8; index++, counter++){
      int arraySize = inputDataSize(); // Selects the number of integers to be sorted
    
      int *randomArray = new int[arraySize];
      int *ascArray = new int[arraySize];
      int *dscArray = new int[arraySize];
      initializeArray(randomArray, ascArray, dscArray, arraySize); // initialize the array
      int *tempRandom = new int[arraySize];
      int *tempASC = new int[arraySize];
      int *tempDSC = new int[arraySize];
      copyArray(randomArray, ascArray, dscArray, tempRandom, tempASC,tempDSC,arraySize);
      // runs bubble sort
      runBubbleSort(tempASC, arraySize, "ascending");
      runBubbleSort(tempDSC, arraySize, "descending");
      runBubbleSort(tempRandom, arraySize, "random");
      cout << endl << endl;
        // copies values in original array back to the temp array
      copyArray(randomArray, ascArray, dscArray, tempRandom, tempASC,tempDSC,arraySize);
      // runs selection sort
      runSelectionSort(tempASC, arraySize, "ascending");
      runSelectionSort(tempDSC, arraySize, "descending");
      runSelectionSort(tempRandom, arraySize, "random");
      cout << endl << endl;
      copyArray(randomArray, ascArray, dscArray, tempRandom, tempASC,tempDSC,arraySize);
        // runs insertion sort
      runInsertionSort(tempASC, arraySize, "ascending");
      runInsertionSort(tempDSC, arraySize, "descending");
      runInsertionSort(tempRandom, arraySize, "random");
      cout << endl << endl;
      copyArray(randomArray, ascArray, dscArray, tempRandom, tempASC,tempDSC,arraySize);
      // runs merge sort
      runMergeSort(tempASC, arraySize, "ascending");
      runMergeSort(tempDSC, arraySize, "descending");
      runMergeSort(tempRandom, arraySize, "random");
      cout << endl << endl;
      copyArray(randomArray, ascArray, dscArray, tempRandom, tempASC,tempDSC,arraySize);
      // runs quick sort
      runQuickSort(tempASC, arraySize, "ascending");
      runQuickSort(tempDSC, arraySize, "descending");
      runQuickSort(tempRandom, arraySize, "random");
      cout << endl << endl;
      copyArray(randomArray, ascArray, dscArray, tempRandom, tempASC,tempDSC,arraySize);
      // runs heap sort
      runHeapSort(tempASC, arraySize, "ascending");
      runHeapSort(tempDSC, arraySize, "descending");
      runHeapSort(tempRandom, arraySize, "random");
      cout << endl << endl;
      cleanup(randomArray, ascArray, dscArray, tempRandom, tempASC, tempDSC); // deallcates memory
    }
}else if(choice == 2){
    // Choice is 2 for task 2
    int arraySize = inputDataSize(); // Selects the number of integers to be sorted
    for(int index = 1; index <= 8; index++, counter++){
    int arraySize = inputDataSize();
    int *randomArray = new int[arraySize];
      int *tempArray = new int[arraySize];
    long long int bubbleSteps = 0;
    long long int bubbleTime = 0;
    long long int selectionSteps = 0;
    long long int selectionTime = 0;
    long long int insertionSteps = 0;
    long long int insertionTime = 0;
    long long int mergeSteps = 0;
    long long int mergeTime = 0;
    long long int quickSteps = 0;
    long long int quickTime = 0;
    long long int heapSteps = 0;
    long long int heapTime = 0;
    for(int i = 0; i < 50;i++){
      //initializes the random array 
      randomFunction(randomArray, arraySize);
      copyRandomArray(randomArray, tempArray, arraySize);
        // runs bubble sort
      averageBubbleSort(tempArray, arraySize, bubbleSteps, bubbleTime);
      copyRandomArray(randomArray, tempArray, arraySize);
        // runs selection sort
      averageSelectionSort(tempArray, arraySize, selectionSteps, selectionTime);
      copyRandomArray(randomArray, tempArray, arraySize);
        // runs insertion sort
      averageInsertionSort(tempArray, arraySize, insertionSteps, insertionTime);
      copyRandomArray(randomArray, tempArray, arraySize);
        // runs merge sort
      averageMergeSort(tempArray, arraySize, mergeSteps, mergeTime);
      copyRandomArray(randomArray, tempArray, arraySize);
      // runs quick sort
      averageQuickSort(tempArray, arraySize, quickSteps, quickTime);
      copyRandomArray(randomArray, tempArray, arraySize);
      // runs heapsort sort
      averageHeapSort(tempArray, arraySize, heapSteps, heapTime); 
    }
      //displays the steps and cpu time
    display(arraySize,bubbleSteps, bubbleTime, "Bubble Sort");
    display(arraySize,selectionSteps, selectionTime, "Selection Sort");
    display(arraySize,insertionSteps, insertionTime, "Insertion Sort");
    display(arraySize,mergeSteps, mergeTime, "Merge Sort");
    display(arraySize,quickSteps, quickTime, "Quick Sort");
    display(arraySize,heapSteps, heapTime, "Heap Sort");
      delete[] randomArray;
}
    
 }else{
    cout << "Incorrect choice";
  }
  return 0;

}

int inputDataSize(){
  switch(counter){
    case(1):
    return 100;
    break;
    case(2):
    return 300;
    break;
    case(3):
    return 500;
    break;
    case(4):
    return 1000;
    break;
    case(5):
    return 3000;
    break;
    case(6):
    return 5000;
    break;
    case(7):
    return 10000;
    break;
    case(8):
    return 50000;
    default:
        return 0;
        break;

  }
  return 0;
}



