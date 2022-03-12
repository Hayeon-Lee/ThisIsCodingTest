#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
using namespace std;

int d[1001] = { 0, };

int main() {
	int n;
	scanf("%d", &n);

	d[1] = 1;
	d[2] = 3;
	for (int i = 3; i <= n; i++) d[i] = d[i - 1] + (2*d[i - 2]);

	printf("%d", d[n]%796796);
}
