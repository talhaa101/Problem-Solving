// Sheet #1 (Data type - Conditions)
// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/N

#include <iostream>
using namespace std ;

int main () {

	char ch ;

	cin >> ch ;

	if (ch >= 'A' && ch <= 'Z') {
		cout << char (ch + 32) ;
	}

	else {
		cout << char (ch - 32) ;
	}

	return 0;
}