/** 
 * Developed by: Abhishek Rauthan
 * Project Description: {this project is to provide user with various sorting algorithms that    they can use however they wish.(in this case get a graph regarding the time taken by these    sorting algorithms)}
 * File description: {This is "the decleration file" i.e only function prototypes are present    in  this file} 
*/

#ifndef SORTALGO_HPP
#define SORTALGO_HPP

#include <iostream>
#include <vector>

using namespace std;

void insertionSort(vector<int> &arr);
int shiftVac(vector<int> &E, int index, int key);

/**
 * the above 2 functions are for insertion sort (recursive)
 * their defination is in the file insertionsort.cpp
*/

void swap(int &a, int &b);
int leftof(int el);
int rightof(int el);
int parentof(int el);
void maxHeapify(vector<int> &arr, int n, int index);
void builMaxHeap(vector<int> &arr);
void heapSort(vector<int> &arr);

/**
 * the above functions are used for heap sort
 * their defination is in the file heapsort.cpp
*/

#endif