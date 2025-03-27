#include "logic.h"

int main() {

	int m;
	cout << "Enter the size of the vector: ";
	cin >> m;

	int* vector = new int[m];
	cout << "Input vector elements value: ";

	for (int j = 0; j < m; j++) {
		cin >> vector[j];
	}

	cout << "Average arithmethical of non-zero elements is "
		<< get_non_zero_elements_avg(vector, m) << endl;

	delete[] vector;

	system("pause");
	return 0;
}