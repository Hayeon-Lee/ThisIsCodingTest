#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main() {
	int N, K, count = 0;
	scanf("%d %d", &N, &K);
	
	while (N != 1) {
		if (N % N == 0) {
			N /= K;
			count += 1;
		}
		else {
			N -= 1;
			count += 1;
		}
	}

	printf("%d", count);
}
