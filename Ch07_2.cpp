#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
using namespace std;

int binary_search(int* arr, int target, int start, int end);
int total(int tmp);

int ddeok[1000000];
int n;
int now = 0;

int main() {
	int m;
	scanf("%d %d", &n, &m);

	for (int i = 0; i < n; i++) scanf("%d", &ddeok[i]);

	sort(ddeok, ddeok + n);

	int result = binary_search(ddeok, m, ddeok[0], ddeok[n - 1]);
	printf("%d", result);
}

int binary_search(int* arr, int target, int start, int end)
{
	if (start > end) return now;
	
	int mid = (start + end) / 2;
	int sum = total(mid);
	
	if (target == sum) return mid;
	
	else if (sum < target) { // 다 더한 값이 target보다 작으면 자르는 높이를 낮춰야 함
		binary_search(ddeok, target, start, mid-1);
	}
	
	else { //다 더한 값이 target보다 크면 자르는 높이를 높여봄
		now = mid;
		binary_search(ddeok, target, mid + 1, end);
	}
}

int total(int tmp) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		if (ddeok[i] - tmp > 0) sum += (ddeok[i] - tmp);
	}
	return sum;
}
