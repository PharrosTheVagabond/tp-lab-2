#ifndef TASK2_H
#define TASK2_H

template<class T, unsigned N>
T* createArr(T(*gen)()) {
	auto arr = new T[N];
	for (unsigned i = 0; i < N; i++) {
		arr[i] = gen();
	}
	return arr;
}

#endif