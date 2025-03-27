#include "logic.h"

int count_local_min_amount(int* vector, int m) {

	int count = 0;

	if (vector[0] < vector[1]) {
		count++;
	}

	for (int j = 2; j < m - 2; j++) {

		if (vector[j - 1] > vector[j] && vector[j] < vector[j + 1]) {
			count++;
		}
	}

	if (vector[m-2] > vector[m - 1]) {
		count++;
	}

	return count;
}

int count_local_max_amount(int* vector, int m) {

	int count = 0;

	if (vector[0] > vector[1]) {
		count++;
	}

	for (int j = 2; j < m - 2; j++) {

		if (vector[j - 1] < vector[j] && vector[j] > vector[j + 1]) {
			count++;
		}
	}

	if (vector[m - 2] < vector[m - 1]) {
		count++;
	}

	return count;
}

int combine_functions_values(int* vector, int m) {

	return count_local_min_amount(vector, m)
		+ count_local_max_amount(vector, m);
}