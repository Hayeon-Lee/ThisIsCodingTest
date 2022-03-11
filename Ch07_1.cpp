#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
using namespace std;

bool binary_search(int* arr, int target, int start, int end);

int main() {
	int n;
	scanf("%d", &n);

	int* arr = new int[n];
	for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

	int m;
	scanf("%d", &m);
	int* find = new int[m];
	for (int i = 0; i < m; i++) scanf("%d", &find[i]);

	sort(arr, arr + n);
	for (int i = 0; i < m; i++) {
		bool result = binary_search(arr, find[i], 0, n - 1);
		if (result == true) printf("yes ");
		else printf("no ");
	}
}

bool binary_search(int* arr, int target, int start, int end)
{
	if (start > end) return false;
	int mid = (start + end) / 2;

	if (arr[mid] == target) return true;

	else if (arr[mid] > target) return binary_search(arr, target, start, mid - 1);

	else return binary_search(arr, target, mid + 1, end);
}
