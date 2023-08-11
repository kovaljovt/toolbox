#ifndef TOOLBOX_SORTINGALGS_H
#define TOOLBOX_SORTINGALGS_H

#include <vector>

class SortingAlgs {
public:
	void bubbleSort(std::vector<int> &arr);

	void insertionSort(std::vector<int> &arr);

	void selectionSort(std::vector<int> &arr);

	// following functions are all about merge sort
	void merge(std::vector<int> &arr, std::vector<int> &leftArray, std::vector<int> &rightArray);

	void mergeSort(std::vector<int> &arr);
	// end of merge sort functions

	void showPickOptions();
};

#endif
