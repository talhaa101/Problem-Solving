// Sheet #1 (Data type - Conditions)
// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/D

#include<iostream>
using namespace std ;

int main () {

	long long a , b , c , d ;

	cin >> a >> b >> c >> d ;

	long long result = (a * b) - (c * d);

	cout << "Difference = " << result << endl ;

	return 0 ;
}