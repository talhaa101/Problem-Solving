// Sheet #1 (Data type - Conditions)
// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/O

#include <iostream>
using namespace std ;

int main () {
		int a , b ;
		char ch ;

		cin >> a >> ch >> b ;

		if ( ch == '+') {
			cout << a + b ;
		}

		else if ( ch == '-') {
			cout << a - b ;
		}
		
		else if ( ch == '*') {
			cout << a * b ;
		}
		
		 else if  ( ch == '/' ) {
			cout << a / b ;
		}

	return 0 ;
}