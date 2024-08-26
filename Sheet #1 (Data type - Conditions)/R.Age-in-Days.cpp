// Sheet #1 (Data type - Conditions)
// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/R


#include <iostream>
using namespace std ;

int main () {

	int n ;

	cin >> n ;

	cout << (n / 365) << " years" << endl ;

	n = n % 365 ;

	cout << (n / 30) << " months" << endl ;

	n = n % 30 ;

	cout << n << " days" ;


	return 0 ;
}