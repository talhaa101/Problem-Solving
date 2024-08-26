// Sheet #1 (Data type - Conditions)
// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/P

#include<iostream>

using namespace std ;

int main () {

	int n ;

	cin >> n ;

	int result = n / 1000 ; 

	if (result % 2 == 0) {
		cout << "EVEN" ;
	}
	else {
		cout << "ODD" ;
	}

	return 0 ;
}