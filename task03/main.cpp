#include "util.h"
#include "logic.h"

int main() {
	srand(time(0));

	int m;
	cout << "Enter the size of the vector: ";
	cin >> m;

	int* vector = new int[m];
	init(vector, m);

	cout << convert_to_string(vector, m) << endl;

	cout << "Average arithmethical of vector elements without extreme ones: " 
		<< get_avg_without_extreme_elements(vector, m) << endl;

	delete[] vector;

	system("pause");
	return 0;
}