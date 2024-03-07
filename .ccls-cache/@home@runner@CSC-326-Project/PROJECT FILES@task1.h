#pragma once
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <chrono>
#include <vector>
#include <fstream>
#include <string>
#include "brandon.h"
#include "brian.h"
#include "hana.h"

using namespace std;
using namespace std::chrono;

void copyArray(int randomArray[], int ascArray[], int dscArray[], int tempRandom[], int tempASC[],int tempDSC[], int arraySize);
void initializeArray(int randomArray[], int ascArray[], int dscArray[], int arraySize);
void runBubbleSort(int array[], int arraySize, const string &arrayType);
void runSelectionSort(int array[], int arraySize, const string &arrayType);
void runInsertionSort(int array[], int arraySize, const string &arrayType);
void runMergeSort(int array[], int arraySize, const string &arrayType);
void runQuickSort(int array[], int arraySize, const string &arrayType);
void runHeapSort(int array[], int arraySize, const string &arrayType);
void cleanup(int randomArray[], int ascArray[], int dscArray[], int tempRandom[], int tempASC[], int tempDSC[]);