#pragma once


void quicksort(int arr[], int low, int high, long long int &steps);
int partition(int arr[], int low, int high, long long int &steps);


void heapify(int array[], int size, int rootIndex, long long int &steps);
void heapSort(int array[], int size, long long int &steps);