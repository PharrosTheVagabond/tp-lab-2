#include "task2.h"
#include "task3.h"
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
	const unsigned n = 20;

	int* arr = createArr<int, n>(genForTest);
	printArr(arr, n);
	map<int, n>(arr, changeForTest);
	printArr(arr, n);

	delete[] arr;
	return 0;
}