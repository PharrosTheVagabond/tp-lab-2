#include "task2.h"
#include <iostream>
#include <cstdlib>

template<class T>
void printArr(T* arr, unsigned N) {
	for (unsigned i = 0; i < N; i++) {
		std::cout << arr[i];
		if (i < N - 1) {
			std::cout << ", ";
		}
	}
	std::cout << std::endl;
}

template<class T>
T genForTest() {
	return std::rand() % 256;
}
template<>
char* genForTest() {
	unsigned N = std::rand() % 11 + 2;
	char* str = new char[N];
	for (unsigned i = 0; i < N - 1; i++) {
		str[i] = std::rand() % 26 + 'a';
	}
	str[N - 1] = 0;
	return str;
}

int main() {
	const unsigned n1 = 27, n2 = 14;

	int* array1 = createArr<int, n1>(genForTest);
	printArr(array1, n1);

	char** array2 = createArr<char*, n1>(genForTest);
	printArr(array2, n2);

	delete[] array1;
	for (unsigned i = 0; i < n2; i++) {
		delete[](array2[i]);
	}
	delete[] array2;
	return 0;
}