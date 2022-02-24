#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int N, M, big = 0;
	scanf("%d %d", &N, &M);

	int** arr = new int*[N];
	for (int i = 0; i < N; i++) {
		arr[i] = new int[M];
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) scanf("%d", &arr[i][j]);
	}

	for (int i = 0; i < N; i++) sort(arr[i], arr[i] + M);
	
	big = arr[0][0];
	for (int i = 0; i < N; i++) {
		if (big < arr[i][0]) big = arr[i][0];
	}

	printf("%d", big);
}
