// Sheet #1 (Data type - Conditions)
// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/L

#include <iostream>
using namespace std ;

int main () {

	string f1 , f2 , s1 , s2 ;

	cin >> f1 >> s1 >> f2 >> s2 ;

	if (s1 == s2) {
		cout << "ARE Brothers" ;
	} 
	else {
		cout << "NOT" ;
	}

	return 0 ;
}