#include "logic.h"
#include "util.h"

int main() {

	int m;
	cout << "Enter size of the vector: ";
	cin >> m;

	int* vector = new int[m];
	init(vector, m);

	cout << "Vector:\n" << convert_to_string(vector, m) << endl;

	int a, b;
	cout << "Input the sort range: ";
	cin >> a >> b;

	delete[] vector;

	system("pause");
	return 0;
}