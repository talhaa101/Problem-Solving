// Sheet #1 (Data type - Conditions)
// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/X


#include<iostream>
using namespace std ;

int main () {

	long long a , b , c , d ;

	cin >> a >> b >> c >> d ;

	if (c >= a && c <= b ){
		if ( b <= d ) {
			cout << c << " " << b ;
		}
		else if ( b >= d ) {
			cout << c << " " << d ;
		}
	}

	else if (a >= c && a <= d) {
			if ( b <= d ) {
			cout << a << " " << b ;
		}
			else if ( b >= d ) {
			cout << a << " " << d ;
		}
	}

	else {
		cout << -1 << endl ;
	}	
	return 0 ;
}