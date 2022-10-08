//============================================================================
// Name        : CodeWar2.cpp
// Author      : grec88
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

bool IsEqual(string str) {
	transform(str.begin(), str.end(), str.begin(), [](char c) {
		return tolower(c);
	});
	if (count(begin(str), end(str), 'x') == count(begin(str), end(str), 'o')) {
		return true;
	}
	return false;
}

int main() {
	cout << IsEqual("zzoo") << "\n";
	return 0;
}
