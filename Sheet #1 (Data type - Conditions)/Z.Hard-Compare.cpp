// Sheet #1 (Data type - Conditions)
//https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Z

#include<iostream>
#include<cmath>
using namespace std ;

int main () {

	long long a , b , c , d ;

	cin >> a >> b >> c >> d ;

	if (b*log(a) > d*log(c) ) {
		cout << "YES" ;
	}

	else {
		cout << "NO" ;
	}

	return 0 ;
}
