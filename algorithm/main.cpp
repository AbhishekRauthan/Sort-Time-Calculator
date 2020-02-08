#include "sortalgo.hpp"
#include "misc.hpp"

int main(int argc, char const *argv[])
{
	for (int i = 1; i <= 5; i++) // this loop is for to go through the five number files that increases the set by 10000 numbers. 
	{
		vector<int> arr = returnVector(i);
		cout<<endl << "------Performance of Isertion sort is for file: " << i << "------";
		// in the following statement "performanceof" function is called on the insertionsort
		int64_t timetaken = performanceOf(insertionSort, arr);
		cout << endl
				 << "Time taken by the given sorting function is: " << timetaken << " milliseconds";
		cout << endl
				 << "------Performance of Heap sort is for file: " << i << "------";
		// simillarly "performanceof" function is called on heapsort
		timetaken = performanceOf(heapSort, arr);
		cout << endl
				 << "Time taken by the given sorting function is: " << timetaken << " milliseconds";
	}
	return 0;
}
