#include "./sortalgo/sortalgo.hpp"
#include "./misc/misc.hpp"

int main(int argc, char const *argv[])
{
	void (*sortFunction[])(vector<float> &) = {quickSort, heapSort, mergeSort, insertionSort};
	vector<string> sortFunctionName = {"quick-sort", "heap-sort", "merge-sort", "insertion-sort"};
	vector<float> arr;
	cout << "Processing...";
	for (int j = 0; j < sortFunctionName.size(); j++)
	{
		for (int i = 1; i < 10; i++)
		{
			float inputSize = WriteFile(i);
			arr = returnVector(inputSize);
			float timetaken = performanceOf((*sortFunction[j]), arr);
			result(sortFunctionName[j], inputSize, timetaken);
		}
	}
	cout << "\ndone";
}
