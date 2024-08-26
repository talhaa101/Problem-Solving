// Sheet #1 (Data type - Conditions)
// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/F

#include <iostream>
using namespace std ;

int main () {

	long long x , y ;
	cin >> x >> y ;
	int result = (x % 10) + (y % 10) ;
	cout << result << endl ;
	return 0 ;
}