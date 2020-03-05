#include "sortalgo.hpp"

void merge(vector<float> &left, vector<float> &right, vector<float> &arr)
{
  int nL = left.size();
  int nR = right.size();
  int i = 0, j = 0, k = 0;

  while (j < nL && k < nR)
  {
    if (left[j] < right[k])
    {
      arr[i] = left[j];
      j++;
    }
    else
    {
      arr[i] = right[k];
      k++;
    }
    i++;
  }
  while (j < nL)
  {
    arr[i] = left[j];
    j++;
    i++;
  }
  while (k < nR)
  {
    arr[i] = right[k];
    k++;
    i++;
  }
}

void mergeSort(vector<float> &arr)
{
  if (arr.size() <= 1)
    return;

  int mid = arr.size() / 2;
  vector<float> left;
  vector<float> right;

  for (int j = 0; j < mid; j++)
    left.push_back(arr[j]);
  for (int j = 0; j < (arr.size() - mid); j++)
    right.push_back(arr[mid + j]);

  mergeSort(left);
  mergeSort(right);
  merge(left, right, arr);
}