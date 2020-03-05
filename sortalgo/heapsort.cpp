#include "sortalgo.hpp"
#include "../misc/misc.hpp"
#include <cmath>

/**
 * !!THIS FILE IS FOE THE IMPLEMENTATION OF HEAPSORT!!
*/

int leftof(int index)
{
  // Returns the index of node left of the root(calling element) 
  return 2 * index + 1;
}

int rightof(int index)
{
  // Returns the index of node right of the root(calling element)
  return 2 * index + 2;
}

int parentof(int index)
{
  // Returns the index of node's parent element
  return (index / 2);
}

/**
 * the following is a function to swap numbers
*/


void maxHeapify(vector<float> &arr, int n, int index)
{
  int l = leftof(index), r = rightof(index), largest = index;
  if (l < n && arr[l] > arr[index])
  {
    largest = l;
  }
  if (r < n && arr[r] > arr[largest])
  {
    largest = r;
  }
  if (largest != index)
  {
    swap(arr[index], arr[largest]);
    maxHeapify(arr, n, largest);
  }
}

void builMaxHeap(vector<float> &arr)
{
  int heapSize = arr.size();
  for (int i = floor(heapSize / 2); i >= 0; i--)
  {
    maxHeapify(arr, heapSize, i);
  }
}

void heapSort(vector<float> &arr)
{
  builMaxHeap(arr);
  for (int i = arr.size() - 1; i >= 0; i--)
  {
    swap(arr[0], arr[i]);
    maxHeapify(arr, i, 0);
  }
}
