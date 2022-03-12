#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
using namespace std;

int d[100] = { 0, };

int main() {
	int n;
	scanf("%d", &n);

	int* arr = new int[n];
	for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

	d[0] = arr[0];
	d[1] = max(arr[0], arr[1]);

	for (int i = 2; i < n; i++) {
		d[i] = max(d[i - 1], d[i - 2] + arr[i]);
	}

	printf("%d", d[n - 1]);
}
