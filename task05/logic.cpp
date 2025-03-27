#include "logic.h"

void sort_to_elements_increasing(int* vector, int m, int a, int b) {

	if (a < 0 || b < 0 || a > m || b > m) {
		cout << "Error...";
		return;
	}

	if (a > b) {
		swap(a, b);
	}

	for (int i = a + 1; i < b; i++) {

		for (int j = a; j < b; j++) {

			if (vector[j] > vector[j + 1]) {
				swap(vector[j], vector[j + 1]);
			}
		}
	}
}

void sort_to_elements_decreasing(int* vector, int m, int a, int b) {

	if (a < 0 || b < 0 || a > m || b > m) {
		cout << "Error...";
		return;
	}

	if (a > b) {
		swap(a, b);
	}

	for (int i = a + 1; i < b; i++) {

		for (int j = a; j < b - 1; j++) {

			if (vector[j] < vector[j + 1]) {
				swap(vector[j], vector[j + 1]);
			}
		}
	}
}