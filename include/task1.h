#ifndef TASK1_H
#define TASK1_H

#include <cstring>

template<class T>
bool firstIsLess(T val1, T val2) {
	return val1 < val2;
}
template<>
bool firstIsLess(char* str1, char* str2) {
	if (strlen(str1) != strlen(str2)) {
		return strlen(str1) < strlen(str2);
	}
	else {
		return strcmp(str1, str2) < 0;
	}
}

template<class T>
void merge(T* arrayStart, unsigned length1, unsigned length2) {
	auto array1Copy = new T[length1];
	for (unsigned i = 0; i < length1; i++) {
		array1Copy[i] = arrayStart[i];
	}
	unsigned i1 = 0, i2 = 0;
	while (i1 < length1 && i2 < length2) {
		if (firstIsLess(array1Copy[i1], arrayStart[length1 + i2])) {
			arrayStart[i1 + i2] = array1Copy[i1++];
		}
		else {
			arrayStart[i1 + i2] = arrayStart[length1 + i2++];
		}
	}
	while (i1 < length1) {
		arrayStart[i1 + i2] = array1Copy[i1++];
	}
	while (i2 < length2) {
		arrayStart[i1 + i2] = arrayStart[length1 + i2++];
	}
	delete[] array1Copy;
}

template<class T>
void msort(T* arr, unsigned N) {
	if (N > 1) {
		msort(arr, N / 2);
		msort(arr + N / 2, N - N / 2);
	}
	merge(arr, N / 2, N - N / 2);
}

#endif