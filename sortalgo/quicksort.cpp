#include "sortalgo.hpp"
#include "../misc/misc.hpp"

float partition(vector<float> &arr, int low, int high)
{
  float pivot = arr[high]; // pivot
  int i = (low - 1);       // Index of smaller element

  for (int j = low; j <= high - 1; j++)
  {
    // If current element is smaller than the pivot
    if (arr[j] < pivot)
    {
      i++; // increment index of smaller element
      swap(arr[i], arr[j]);
    }
  }
  swap(arr[i + 1], arr[high]);
  return (i + 1);
}

void sort(vector<float> &arr, int low, int high)
{
  if (low < high)
  {
    /* pi is partitioning index, arr[p] is now  
        at right place */
    int pi = partition(arr, low, high);

    // Separately sort elements before
    // partition and after partition
    sort(arr, low, pi - 1);
    sort(arr, pi + 1, high);
  }
}

void quickSort(vector<float> &arr)
{
  sort(arr, 0, arr.size() - 1);
}