#include "task2.h"
#include "task3.h"

int main() {
	const unsigned n = 20;

	int* arr = createArr<int, n>(genForTest);
	printArr(arr, n);
	map<int, n>(arr, changeForTest);
	printArr(arr, n);

	delete arr;
	return 0;
}