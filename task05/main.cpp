#include "logic.h"
#include "util.h"

int main() {

	int m;
	cout << "Enter size of the vector: ";
	cin >> m;

	int* vector = new int[m];
	init(vector, m);

	cout << "Vector before:\n" << convert_to_string(vector, m);

	int a, b;
	cout << "\n\nInput the sort range: ";
	cin >> a >> b;

	bool flag;
	cout << "Sort it to increasing[0] or decrasing[1] ? ";
	cin >> flag;

	flag ? sort_to_elements_decreasing(vector, m, a, b)
		: sort_to_elements_increasing(vector, m, a, b);

	cout << "Vector after:\n" << convert_to_string(vector, m) << endl;

	delete[] vector;

	system("pause");
	return 0;
}