#include "logic.h"

double get_non_zero_elements_avg(int* vector, int m) {

	int sum = 0;
	double count = 0;

	for (int j = 0; j < m; j++) {

		if (vector[j]) {

			count++;
			sum += vector[j];
		}
	}

	return count ? sum / count : 0;
}