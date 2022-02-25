#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <vector>
using namespace std;
int main() {
	int N;
	scanf("%d", &N);
	getchar();

	char input[101];
	gets_s(input);

	char direction[101];
	int k = 0;
	for (int i = 0; i < strlen(input); i++) {
		if (input[i] == 'R' || input[i] == 'L' || input[i] == 'U' || input[i] == 'D') {
			direction[k] = input[i];
			k++;
		}
	}

	pair <int, int> now;
	now.first = 1;
	now.second = 1;
	
	for (int i = 0; i < k; i++) {
		if (direction[i] == 'R') {
			if (now.second != N) now.second++;
		}
		if (direction[i] == 'L') {
			if (now.second != 1) now.second--;
		}
		if (direction[i] == 'U') {
			if (now.first != 1) now.first--;
		}
		if (direction[i] == 'D') {
			if (now.first != N) now.first++;
		}
	}

	printf("%d %d", now.first, now.second);
}
