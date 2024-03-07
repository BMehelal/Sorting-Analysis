#pragma once

#include "task1.h"

void averageBubbleSort(int array[],int arraySize, long long int &totalSteps, long long int &totalTime);
void averageSelectionSort(int array[],int arraySize, long long int &totalSteps, long long int &totalTime);
void averageInsertionSort(int array[],int arraySize, long long int &totalSteps, long long int &totalTime);
void averageMergeSort(int array[],int arraySize, long long int &totalSteps, long long int &totalTime);
void averageQuickSort(int array[],int arraySize, long long int &totalSteps, long long int &totalTime);
void averageHeapSort(int array[],int arraySize, long long int &totalSteps, long long int &totalTime);
void randomFunction(int randomArray[],int arraySize);
void copyRandomArray(int randomArray[], int tempRandom[], int arraySize);
void display(int &arraySize,long long int &totalSteps, long long int &totalTime, const string &algo);