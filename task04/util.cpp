#include "util.h"

void init(int* vector, int m) {

	for (int j = 0; j < m; j++) {

		vector[j] = rand() % 10 + 1;
	}
}

string convert_to_string(int* vector, int m) {

	string str = "";

	for (int j = 0; j < m; j++) {

		str += to_string(vector[j]) + " ";
	}

	return str;
}