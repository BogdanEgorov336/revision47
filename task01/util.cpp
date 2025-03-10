#include "util.h"

void init(int* array, int size) {

	for (int i = 0; i < size; i++) {

		array[i] = rand() % 10 + 1;
	}
}

string covert_to_string(int* array, int size) {

	string str = "";

	for (int i = 0; i < size; i++) {

		str += to_string(array[i]) + " ";
	}

	return str;
}