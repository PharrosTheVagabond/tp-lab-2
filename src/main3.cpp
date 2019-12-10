#include "task2.h"
#include "task3.h"

int main() {
	const unsigned n = 20;
	int* arr = createArr<int>(genForTest, n);
	printArr(arr, n);
	map(arr, changeForTest, n);
	printArr(arr, n);
	return 0;
}