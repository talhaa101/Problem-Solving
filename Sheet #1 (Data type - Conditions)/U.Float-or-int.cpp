// Sheet #1 (Data type - Conditions)
// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/U

#include <iostream>
using namespace std ;

int main () {

	double x ;

	cin >> x ;

	int y = int (x) ;

	if ( x - y > 0 ) {
		cout << "float " << y << " " << x-y << endl;
	}

	else {
		cout << "int " << int (x) << endl ;
	}


	return 0 ;
}