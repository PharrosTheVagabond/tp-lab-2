#ifndef TASK2_H
#define TASK2_H

#include <cstdlib>
#include <iostream>

template<class T, unsigned N>
T* createArr(T(*gen)()) {
	auto arr = new T[N];
	for (unsigned i = 0; i < N; i++) {
		arr[i] = gen();
	}
	return arr;
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

#endif