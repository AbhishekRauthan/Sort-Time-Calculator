/** 
 * Developed by: Abhishek Rauthan
 * Project Description: {this project is to get the time taken by various sorting algorithms}
 * File description: {This is "the decleration file" i.e only function prototypes are present    in  this file} 
*/

#ifndef SORTALGO_HPP
#define SORTALGO_HPP

#include <iostream>
#include <vector>

using namespace std;

void insertionSort(vector<float> &arr);
int shiftVac(vector<float> &E, int index, int key);

/**
 * the above 2 functions are for insertion sort (recursive)
 * their defination is in file insertionsort.cpp
*/

int leftof(int el);
int rightof(int el);
int parentof(int el);
void maxHeapify(vector<float> &arr, int n, int index);
void builMaxHeap(vector<float> &arr);
void heapSort(vector<float> &arr);

/**
 * the above functions are used for heap sort
 * their defination is in file heapsort.cpp
*/

void merge(vector<float> &left, vector<float> &right, vector<float> &arr);
void mergeSort(vector<float> &arr);

/**
 * the above 2 functions are for mergesort
 * their defination is in file mergesort.cpp
 */

void quickSort(vector<float> &arr);
void sort(vector<float> &arr, int low, int high);
float partition(vector<float> &arr, int low, int high);

/**
 * the above functions are for quicksort
 * their defination is in file quicksort.cpp
*/

#endif