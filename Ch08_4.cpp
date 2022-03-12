#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
using namespace std;

int d[10001] = { 0, };

int main() {
	int n, m;
	scanf("%d %d", &n, &m);

	int* coin = new int[n];
	for (int i = 0; i < n; i++) scanf("%d", &coin[i]);

	for (int i = 0; i < n; i++) d[coin[i]] = 1; //이미 있는 동전은 1가지 방법이 가장 적은 방법이므로 미리 처리
	sort(coin, coin + n);

	for (int i = 1; i < coin[0]; i++) d[i] = -1; //제일 작은 동전보다 작은 금액은 만들 수 없으므로 -1 처리

	int small = 10000;
	int tmp = -1;

	for (int i = coin[0]; i <= m; i++) { //이미 만든 것부터 시작
		for (int j = 0; j < n; j++) {
			if (d[i - coin[j]] > -1 && ((i-coin[j])>0 )) {
				tmp = (d[i - coin[j]] + 1); //만들 수 있을 경우
				if (small > tmp) small = tmp;
			}
		}
		if (small != 10000 && tmp != -1) d[i] = small;
		else d[i] = -1;
		small = 10000;
		tmp = -1;
	}

	printf("%d", d[m]);
}
