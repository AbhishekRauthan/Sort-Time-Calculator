#include "misc.hpp"
#include <string>

using namespace std;

/**
 * the following is the performance function that takes a function pointer(pointer to a    function) and a vector "arr" of type int
 -- THE FOLLOWING POINTS ARE TO TELL ABOUT THE SYNTAX AND WORKING OF THE FUNCTION --
 * float tells that the function returns an float(meaning int of 64 bits)
 * *sortfunction is the name of the function pointer, * here for the C++ pointer syntax
 * (vector<int> &) tells us the type and number of arguments the function pointer accepts
 * vector<int> &arr is the vector that we are sending for sortfunction to act upon
*/


float performanceOf(void (*sortFunction)(vector<int> &), vector<int> &arr)
{
  auto start = chrono::high_resolution_clock::now();                           // gets the time before the execution of sortfunction
  (*sortFunction)(arr);                                              // execution of the function
  auto finish = chrono::high_resolution_clock::now();                          // gets the time after the execution of sort function
  auto duration = chrono::duration_cast<chrono::milliseconds>(finish - start); // calculate the difference between the 2 in milliseconds(might change to microseconds)
  // .count() calculate and return the numerical value of the time
  return duration.count();
}

/**
 * the returnVector function returns a vector that is filled with the values that are there in the file Numbers[1...5].txt
 * it takes an integer i take helps it to get values from 5 different numbers file 
*/

vector<int> returnVector(int i)
{
  vector<int> arr;
  string fileName = "Numbers" + to_string(i) + ".txt";
  ifstream file(fileName);
  int val;
  while (file >> val)
  {
    arr.push_back(val);
  }
  return arr;
}

float WriteFile(int i)
{

  int randomSize[] = {
      17254,
      31670,
      27150,
      54700,
      21933,
      14881,
      62040,
      85620,
      24150,
      15371};
  return randomSize[i];
}

void result(string func, float inputSize, float timetaken)
{
  fstream file("result.txt", ios::app);
  file << "for input size: " << inputSize << " " << func << " takes time: " << timetaken << " milliseconds\n";
}