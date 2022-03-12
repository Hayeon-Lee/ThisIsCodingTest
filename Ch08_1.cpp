#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
using namespace std;

int d[30001] = { 0, };

int main() {
	int n;
	scanf("%d", &n);

	for (int i = 2; i <= n; i++) {
		d[i] = d[i - 1] + 1;

		if (i % 2 == 0) d[i] = min(d[i], d[i / 2] + 1);

		if (i % 3 == 0) d[i] = min(d[i], d[i / 3] + 1);

		if (i % 5 == 0) d[i] = min(d[i], d[i / 5] + 1);
	}

	printf("%d", d[n]);
}
