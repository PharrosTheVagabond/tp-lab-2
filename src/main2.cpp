#include "task2.h"

int main() {
	const unsigned n1 = 27, n2 = 14;

	int* array1 = createArr<int, n1>(genForTest);
	printArr(array1, n1);

	char** array2 = createArr<char*, n1>(genForTest);
	printArr(array2, n2);

	delete array1;
	for (unsigned i = 0; i < n2; i++) {
		delete(array2[i]);
	}
	delete array2;
	return 0;
}