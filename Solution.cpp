#include <bits/stdc++.h>
using namespace std;

int main() {
	// data type
	// int, long long: +- 2 ty
	// float, double: 
	// char
	// string
	// bool
	
	
	// operators
	// +, -, *, /, %
	// ==, !=, >, >=, <, <=
	// &&, ||, ! cout << !(5 == 3);
	
	// Assign
	// =, +=, -=, *=, /=
	
	// asc, des
	// ++, --
	
	int a, b;
	cin >> a >> b;
	int tmp = a;
	a = b;
	b = tmp;
	cout << 128*a + 97*b + 1000;
    return 0;
}
