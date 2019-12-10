#ifndef TASK3_H
#define TASK3_H

template<class T, unsigned N>
void map(T* arr, T(*change)(T)) {
	for (unsigned i = 0; i < N; i++) {
		arr[i] = change(arr[i]);
	}
}

template<class T>
T changeForTest(T value) {
	return value + 3;
}

#endif