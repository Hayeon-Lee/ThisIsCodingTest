#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
using namespace std;

bool compare(int i, int j) {
	return (j < i);
}

int main() {
	int N;
	scanf("%d", &N);

	int* arr = new int[N];
	for (int i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
	}

	sort(arr, arr + N, compare);
	for (int i = 0; i < N; i++) printf("%d ", arr[i]);
}
