#include "./sortalgo/sortalgo.hpp"
#include "./misc/misc.hpp"

int main(int argc, char const *argv[])
{
	void (*sortFunction[])(vector<float> &) = {quickSort, heapSort, mergeSort, insertionSort};
	vector<string> sortFunctionName = {"quick-sort", "heap-sort", "merge-sort", "insertion-sort"};
	vector<float> arr;
	vector<float> time;
	float timeSum = 0;
	cout << "Processing...";
	for (int j = 0; j < sortFunctionName.size(); j++)
	{
		for (int i = 1; i < 10; i++)
		{
			float inputSize = WriteFile(i);
			arr = returnVector(inputSize);
			float timetaken = performanceOf((*sortFunction[j]), arr);
			timeSum += timetaken;
			// result(sortFunctionName[j], inputSize, timetaken);
		}
		time.push_back((timeSum / 10));
		timeSum = 0;
	}
	cout << "done";
	for (int i = 0; i < sortFunctionName.size(); i++)
	{
		cout << "\n"
				 << sortFunctionName[i] << " takes time: " << time[i];
	}
}
