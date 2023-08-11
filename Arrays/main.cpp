#include "ArrayFundamentals.h"

int main() {
	const int ARRAY_SIZE = 12;
	int testArray[] = {4, 7, 7, 9, 9, 9, 8, 3, 3, 3, 3, 10};

	ArrayFundamentals test;

	test.searchForSpecificValue(testArray, ARRAY_SIZE, 8);
	test.searchForHighestValue(testArray, ARRAY_SIZE);
	test.countNegativePositive(testArray, ARRAY_SIZE);
	test.computeAverage(testArray, ARRAY_SIZE);
	test.findTheMostCommonElement(testArray, ARRAY_SIZE);

	return 0;
}