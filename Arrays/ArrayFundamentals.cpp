#include "ArrayFundamentals.h"

void ArrayFundamentals::searchForSpecificValue(int *arr, int size, int targetValue) {
	int targetValueIndex = 0;
	while ((targetValueIndex < size) && (arr[targetValueIndex] != targetValue)) {
		targetValueIndex++;
	}
	std::cout << "Target value " << targetValue << " found at position: " << targetValueIndex << " in the array.";
	std::cout << '\n';
}

void ArrayFundamentals::searchForHighestValue(int *arr, int size) {
	int highestValue = arr[0];
	int highestValueIndex = 0;
	for (int i = 1; i < size; i++) {
		if (arr[i] > highestValue)
			highestValue = arr[i];
		highestValueIndex++;
	}
	std::cout << "The highest value in the array is: " << highestValue << " and it is located at the "
	          << highestValueIndex << " index in the array.";
	std::cout << '\n';
}

void ArrayFundamentals::countNegativePositive(int *arr, int size) {
	int positiveCount = 0;
	int negativeCount = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] < 0) negativeCount++;
		if (arr[i] > 0) positiveCount++;
	}
	std::cout << "Positive numbers count: " << positiveCount << ", Negative numbers count: " << negativeCount << ".";
	std::cout << '\n';
}

void ArrayFundamentals::computeAverage(int *arr, int size) {
	double sum = 0;
	for (int i = 0; i < size; i++) {
		sum += arr[i];
	}
	double average = sum / size;
	std::cout << "The Average of the array is: " << average << ".";
	std::cout << '\n';
}

void ArrayFundamentals::findTheMostCommonElement(int *arr, int size) {
	int mostFrequent;
	int highestFrequency = 0;
	int currentFrequency = 0;
	for (int i = 0; i < size; i++) {
		currentFrequency++;
		// if arr[i] is the last occurence of a value
		if (i == size - 1 || arr[i] != arr[i + 1]) {
			if (currentFrequency > highestFrequency) {
				highestFrequency = currentFrequency;
				mostFrequent = arr[i];
			}
			currentFrequency = 1;
		}
	}
	std::cout << "The most frequent element is " << mostFrequent << " with a frequency of " << highestFrequency << "."
	          << '\n';
	std::cout << '\n';
}
