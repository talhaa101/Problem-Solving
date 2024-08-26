// Sheet #1 (Data type - Conditions)
// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/V

#include <iostream>
using namespace std ;

int main () {

	int a , b ;

	char ch ;

	cin >> a >> ch >> b;

	if ( a > b && ch =='>') {
		cout << "Right" << endl ; 
	}

	else if (a > b && ch =='=') {
		cout << "Wrong" << endl ;
	}

	else if (a < b && ch =='=') {
		cout << "Wrong" << endl ;
	}

	else if (a > b && ch =='<') {
		cout << "Wrong" << endl ;
	}

	else if (a < b && ch == '<'){
		cout << "Right" << endl ;
	}

	else if (a < b && ch == '>') {
		cout << "Wrong" << endl ;
	}

	else if (a == b && ch == '=') {
		cout << "Right" << endl ;
	}

	else if (a == b && ch == '>') {
		cout << "Wrong" << endl ;
	}

	else if (a == b && ch == '<') {
		cout << "Wrong" << endl ;
	}



	return 0 ;
}