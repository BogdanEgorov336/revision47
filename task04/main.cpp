#include "logic.h"
#include "util.h"

int main() {
	srand(time(0));

	int m;
	cout << "Enter the size of the vector: ";
	cin >> m;

	int* vector = new int[m];
	init(vector, m);

	cout << "Vector: " << convert_to_string(vector, m) << endl;

	cout << "Sum of local extremes: " << combine_functions_values(vector, m) << endl;

	delete[] vector;

	system("pause");
	return 0;
}