#include "sortalgo.hpp"

int shiftVac(vector<int> &E, int index, int key)
{
  int vacant = index, xloc = 0;
  while (vacant > 0)
  {
    if (E[vacant - 1] <= key)
    {
      xloc = vacant;
      break;
    }
    E[vacant] = E[vacant - 1];
    vacant--;
  }
  return xloc;
}

void insertionSort(vector<int> &arr)
{
  int index;
  for (index = 1; index < arr.size(); index++)
  {
    int current = arr[index];
    int xloc = shiftVac(arr, index, current);
    arr[xloc] = current;
  }
  return;
}
