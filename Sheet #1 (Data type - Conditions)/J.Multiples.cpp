// Sheet #1 (Data type - Conditions)
// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/J

#include<iostream>
using namespace std ;

int main () {

	int a , b ;
 	cin >> a >> b ;

 	if (a % b == 0) {

 		cout << "Multiples" << endl ;
 	}

 	else if ( b % a == 0) {
 		cout << "Multiples" << endl ;
 	}

 	else {
 		cout << "No Multiples" << endl ;
 	}

	return 0 ;
}