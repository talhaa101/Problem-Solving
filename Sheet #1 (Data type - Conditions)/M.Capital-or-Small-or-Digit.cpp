// Sheet #1 (Data type - Conditions)
//https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/M

#include <iostream>
using namespace std ;

int main () {

	char ch ;

	cin >> ch ;

	if (ch >='0' && ch <= '9'){
		cout << "IS DIGIT" ;
	}

	else {
		cout << "ALPHA" << endl;

		if (ch >= 'A' && ch <='Z' ){
			cout << "IS CAPITAL";
		}

		else if (ch >= 'a' && ch <= 'z'){
			cout << "IS SMALL";
		}

	}

	return 0 ;
}