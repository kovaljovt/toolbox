#include "SortingAlgs.h"

#include <iostream>
#include <vector>

void SortingAlgs::bubbleSort(std::vector<int> &arr) {
	int n = arr.size();
	for (int i = 0; i < n - 1; ++i) {
		for (int j = 0; j < n - 1; ++j) {
			if (arr[j] > arr[j + 1]) {
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
	for (const auto &element: arr) {
		std::cout << element << " ";
	}
	std::cout << '\n' << '\n';
}

void SortingAlgs::insertionSort(std::vector<int> &arr) {
	int n = arr.size();
	for (int i = 1; i < n; i++) {
		int key = arr[i];
		int j = i - 1;
		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key;
	}
	for (const auto &element: arr) {
		std::cout << element << " ";
	}
	std::cout << '\n' << '\n';
}

void SortingAlgs::selectionSort(std::vector<int> &arr) {
	int n = arr.size();
	for (int i = 0; i < n - 1; ++i) {
		int min = i;
		for (int j = i + 1; j < n; ++j) {
			if (arr[j] < arr[min]) {
				min = j;
			}
		}
		if (min != i) {
			int temp = arr[i];
			arr[i] = arr[min];
			arr[min] = temp;
		}
	}
	for (const auto &element: arr) {
		std::cout << element << " ";
	}
	std::cout << '\n' << '\n';
}

// following functions are all about merge sort
void SortingAlgs::mergeSort(std::vector<int> &arr) {
	int length = arr.size();
	if (length <= 1) return;    // base case
	int middle = length / 2;
	std::vector<int> leftArray(arr.begin(), arr.begin() + middle);
	std::vector<int> rightArray(arr.begin() + middle, arr.end());
	mergeSort(leftArray);
	mergeSort(rightArray);
	merge(arr, leftArray, rightArray);
}

void SortingAlgs::merge(std::vector<int> &arr, std::vector<int> &leftArray, std::vector<int> &rightArray) {
	int leftSize = arr.size() / 2;
	int rightSize = arr.size() - leftSize;
	int i = 0;  // original array
	int l = 0;  // left array
	int r = 0;  // right array
	// check the condition for merging
	while (l < leftSize && r < rightSize) {
		if (leftArray[l] < rightArray[r]) {
			arr[i] = leftArray[l];
			i++;
			l++;
		} else {
			arr[i] = rightArray[r];
			i++;
			r++;
		}
	}
	while (l < leftSize) {
		arr[i] = leftArray[l];
		i++;
		l++;
	}
	while (r < rightSize) {
		arr[i] = rightArray[r];
		i++;
		r++;
	}
}
// end of merge sort functions

void SortingAlgs::showPickOptions() {
	int choice;
	bool exitFlag = false;
	std::vector<int> test = {1, 3, 4, 9, 8, 6, 7, 5, 2};
	do {
		std::cout << "--- SORTING ALGORITHMS ---\n" << '\n';
		std::cout << "1. Bubble Sort" << '\n';
		std::cout << "2. Insertion Sort" << '\n';
		std::cout << "3. Selection Sort" << '\n';
		std::cout << "4. Merge Sort" << '\n';
		std::cout << "0. Exit\n" << '\n';
		std::cout << "Which Sorting algorithm would you like to use?\n";
		std::cin >> choice;
		switch (choice) {
			case 1:
				bubbleSort(test);
				break;
			case 2:
				insertionSort(test);
				break;
			case 3:
				selectionSort(test);
				break;
			case 4:
				mergeSort(test);
				for (const auto &element : test)
					std::cout << element << " ";
				std::cout << '\n' << '\n';
				break;
			case 0:
				exitFlag = true;
				std::cout << "Goodbye\n";
				break;
			default:
				std::cout << "Error: Invalid option!" << '\n' << '\n';
				break;
		}
	} while (!exitFlag);
}

