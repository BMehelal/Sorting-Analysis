#include "task1.h"
#include "task2.h"

int inputDataSize();
int counter = 1;

int main() {
  int choice;
  cout << "Task 1 or Task 2(Enter '1' or '2'): ";
  cin >> choice;
  if(choice == 1){
    for(int index = 1; index <= 8; index++, counter++){
      int arraySize = inputDataSize();

      int *randomArray = new int[arraySize];
      int *ascArray = new int[arraySize];
      int *dscArray = new int[arraySize];
      initializeArray(randomArray, ascArray, dscArray, arraySize);
      int *tempRandom = new int[arraySize];
      int *tempASC = new int[arraySize];
      int *tempDSC = new int[arraySize];
      copyArray(randomArray, ascArray, dscArray, tempRandom, tempASC,tempDSC,arraySize);
      runBubbleSort(tempASC, arraySize, "ascending");
      runBubbleSort(tempDSC, arraySize, "descending");
      runBubbleSort(tempRandom, arraySize, "descending");
      cout << endl << endl;
      copyArray(randomArray, ascArray, dscArray, tempRandom, tempASC,tempDSC,arraySize);
      runSelectionSort(tempASC, arraySize, "ascending");
      runSelectionSort(tempDSC, arraySize, "descending");
      runSelectionSort(tempRandom, arraySize, "descending");
      cout << endl << endl;
      copyArray(randomArray, ascArray, dscArray, tempRandom, tempASC,tempDSC,arraySize);
      runInsertionSort(tempASC, arraySize, "ascending");
      runInsertionSort(tempDSC, arraySize, "descending");
      runInsertionSort(tempRandom, arraySize, "descending");
      cout << endl << endl;
      copyArray(randomArray, ascArray, dscArray, tempRandom, tempASC,tempDSC,arraySize);
      runMergeSort(tempASC, arraySize, "ascending");
      runMergeSort(tempDSC, arraySize, "descending");
      runMergeSort(tempRandom, arraySize, "descending");
      cout << endl << endl;
      copyArray(randomArray, ascArray, dscArray, tempRandom, tempASC,tempDSC,arraySize);
      runQuickSort(tempASC, arraySize, "ascending");
      runQuickSort(tempDSC, arraySize, "descending");
      runQuickSort(tempRandom, arraySize, "descending");
      cout << endl << endl;
      copyArray(randomArray, ascArray, dscArray, tempRandom, tempASC,tempDSC,arraySize);
      runHeapSort(tempASC, arraySize, "ascending");
      runHeapSort(tempDSC, arraySize, "descending");
      runHeapSort(tempRandom, arraySize, "descending");
      cout << endl << endl;
      cleanup(randomArray, ascArray, dscArray, tempRandom, tempASC, tempDSC);
    }
}else if(choice == 2){
    for(int index = 1; index <= 8; index++, counter++){
    int arraySize = inputDataSize();
    int *randomArray = new int[arraySize];
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
      randomFunction(randomArray, arraySize);
      averageBubbleSort(randomArray, arraySize, bubbleSteps, bubbleTime);
      averageSelectionSort(randomArray, arraySize, selectionSteps, selectionTime);
      averageInsertionSort(randomArray, arraySize, insertionSteps, insertionTime);
      averageMergeSort(randomArray, arraySize, mergeSteps, mergeTime);
      averageQuickSort(randomArray, arraySize, quickSteps, quickTime);
      averageHeapSort(randomArray, arraySize, heapSteps, heapTime);    
    }
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



