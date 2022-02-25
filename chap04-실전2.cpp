#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <sstream>
using namespace std;

int main() {
	char input[3];
	scanf("%s", input);

	int row = (input[1] - '0');
	int col = (input[0] - 'a') + 1;

	int count = 0;

	if ((row - 2) >= 1) { //위로 두 칸
		if (col + 1 <= 8) count++; //오른쪽 한 칸
		if (col - 1 >= 1)count++; //왼쪽 한 칸
	}

	if ((row + 2) <= 8) { //아래로 두 칸
		if (col + 1 <= 8) count++; //오른쪽 한 칸
		if (col - 1 >= 1) count++; //왼쪽 한 칸
	}

	if ((col - 2) >= 1) { //왼쪽으로 두 칸
		if (row + 1 <= 8) count++; //아래쪽으로 한 칸
		if (row - 1 >= 1) count++; //위쪽으로 한 칸
	}

	if((col+2)<=8){ //오른쪽으로 두 칸
		if (row + 1 <= 8) count++; //아래쪽으로 한 칸
		if (row - 1 >= 1) count++; //위쪽으로 한 칸
	}

	printf("%d", count);
}
