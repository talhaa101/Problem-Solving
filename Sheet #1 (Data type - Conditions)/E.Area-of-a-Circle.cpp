// Sheet #1 (Data type - Conditions)
// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/E

#include <iostream>
#include <iomanip>
using namespace std ;

int main () {
	
	double pi = 3.141592653;
	double area ;
	double R ;

	cin >> R ;

	 area = pi * R * R ;

	cout << fixed << setprecision(9) << area << endl ;

	return 0;

}