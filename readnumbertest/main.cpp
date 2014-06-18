// readnumbertest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int readNumber();
int writeAnswer(int x, int y);

int main() {
	using namespace std;
	int no1;
	no1 =	readNumber();
	int no2;
	no2 =	readNumber();

	int ans = writeAnswer(no1, no2);
	cout << no1 << " + " << no2 << " = " << ans << endl;
	return 0;
}

int readNumber() {
	using namespace std;

	int num;
	cin >> num;

	return num;
}

int writeAnswer(int x, int y) {
	using namespace std;
	int z = x + y;

	return z;
}
