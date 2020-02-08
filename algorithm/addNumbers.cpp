#include <iostream>
#include <fstream>
#include <ctime>
#include <stdlib.h>

using namespace std;

// int gen()
// {
//   return rand();
// }

int main(int argc, char const *argv[])
{
  // vector<int> values(1000);
  // auto f = []() -> int { return rand() % 1000; };
  // generate(values.begin(), values.end(), gen);
  ofstream file("Numbers4.txt", ios::app);
  srand(time(0));
  for (int i = 0; i < 40000; i++)
  {
    file << rand() << "\n";
  }
  return 0;
}
