#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
using namespace std;

bool compare(int i, int j) {
	return i > j;
}
int main() {
	int n, k;
	scanf("%d %d", &n, &k);

	int* arr1 = new int[n];
	int* arr2 = new int[n];

	for (int i = 0; i < n; i++) scanf("%d", &arr1[i]);
	for (int i = 0; i < n; i++) scanf("%d", &arr2[i]);

	sort(arr1, arr1 + n);
	sort(arr2, arr2 + n, compare);

	int count = 0;
	int i = 0;// j = 0; 수정
	while (count < k) {
		if (arr1[i] < arr2[i]) {
			int tmp = arr2[i];
			arr2[i] = arr1[i];
			arr1[i] = tmp;

			i++;
			//j++;
			count++;
		}
		else i++;
		if (i >= n) break;
	}

	int sum = 0;
	for (int i = 0; i < n; i++) sum += arr1[i];
	printf("%d", sum);
}
