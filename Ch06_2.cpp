#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main() {
	int N;
	scanf("%d", &N);

	vector<pair<string, int>> v;
	string name;
	int score;

	for (int i = 0; i < N; i++)
	{
		cin >> name;
		scanf("%d", &score);
		v.push_back(pair<string, int>(name, score));
	}

	sort(v.begin(), v.end());
	
	for (int i = 0; i < v.size(); i++) cout << v[i].first << ' ';
}
