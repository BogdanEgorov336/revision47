#include "logic.h"

int get_max(int* vector, int m) {

	int max = vector[0];

	for (int j = 1; j < m; j++) {

		if (max < vector[j]) {
			max = vector[j];
		}
	}

	return max;
}

int get_min(int* vector, int m) {

	int min = vector[0];

	for (int j = 1; j < m; j++) {

		if (min > vector[j]) {
			min = vector[j];
		}
	}

	return min;
}

double get_avg_without_extreme_elements(int* vector, int m) {

	int max = get_max(vector, m);
	int min = get_min(vector, m);

	double sum = 0;
	int c = 0;

	for (int j = 0; j < m; j++) {

		if (vector[j] != max && vector[j] != min) {
			
			sum += vector[j];
			c++;
		}
	}

	return c ? sum / c : 0;
}