// Sheet #1 (Data type - Conditions)
// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Y

#include<iostream>
using namespace std ;

int main () {

	int a , b , c , d ;

	cin >> a >> b >> c >> d ;

	a = a % 100 ;
	b = b % 100 ;
	c = c % 100 ;
	d = d % 100 ;
	long long multiplication = a * b * c  * d ;

	int result = multiplication % 100 ; 

	if ( result < 10 ) { // if a = b = c = d = 100
		cout << 0 << result ; 
	}
	else {
	cout << result ; 
	}

	return 0 ;
}