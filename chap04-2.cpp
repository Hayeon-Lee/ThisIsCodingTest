#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <sstream>
using namespace std;

int main() {
	int N;
	scanf("%d", &N);
	
	int seconds = (N * 60 * 60);
	seconds += (59 * 60);
	seconds += 60; // 초로 전부 변환

	int count = 0;
	string hour, min, sec;

	for (int i = 0; i <= seconds; i++) {
		hour = to_string(i / 3600);
		min = to_string((i % 3600)/60);
		sec = to_string(i % 60);

		if (hour.find("3") != string::npos) count++;
		else if(min.find("3") != string::npos) count++;
		else if (sec.find("3") != string::npos) count++;
	}

	printf("%d", count);
}
