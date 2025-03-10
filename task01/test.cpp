#include "tests.h"

void print_test(int* array, int size, int expected, string test_name) {
	int actual = get_sum(array, size);
	string msg = actual == expected ? "PASS(green)" : "FAIL(red)";
	cout << test_name << " --> " << msg << endl;
	cout << "array: " << covert_to_string(array, size) << endl;
	cout << "sum: expected = " << expected << ", actual = " << actual << endl;
	cout << "--------------------------------------------" << endl;
}

void test01() {

	int array[]{ 3, 3, 10, 5, 7, -1, 3, 3, 3, 3 };
	int size = 10;
	int expected = 12;
	print_test(array, size, expected, "TEST01");
}

void test02() {

	int array[]{ 12, 14, -3, 5, 10, 4, 4, 4, 4, 4};
	int size = 10;
	int expected = 0;
	print_test(array, SIZE, expected, "TEST02");
}
//
//void test03() {
//
//	int array[SIZE]{ -100, 4, 6, 12, 4, -1};
//	int expected = 26;
//	int actual = get_sum(array, SIZE);
//	cout << actual << endl;
//	print(array, SIZE, "TEST03", expected == actual);
//}