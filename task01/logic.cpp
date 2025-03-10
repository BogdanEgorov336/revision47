#include "logic.h"


int get_max_index(int* array, int size) {

	int max = 0;

	for (int i = 1; i < size; i++) {

		if (abs(array[i]) > abs(array[max])) {
			max = i;
		}
	}

	return max;
}

int get_min_index(int* array, int size) {

	int min = 0;

	for (int i = 1; i < size; i++) {

		if (abs(array[i]) < abs(array[min])) {
			min = i;
		}
	}

	return min;
}

int get_sum(int* array, int size) {
	int sum = 0;

	int index_max = get_max_index(array, size);
	int index_min = get_min_index(array, size);

	if (index_max > index_min) {
		swap(index_max, index_min);
	}

	for (int i = index_max + 1; i < index_min; i++) {

		sum += array[i];
	}

	return sum;
}