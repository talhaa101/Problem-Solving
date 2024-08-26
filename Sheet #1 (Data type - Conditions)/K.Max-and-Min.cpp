// Sheet #1 (Data type - Conditions)
// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/K

#include<iostream>
using namespace std ;

int main () {

	int a , b , c ;
	cin >> a >> b >> c ;

	int minimum =  min (c , min(a , b)) ;
	int maximum =  max (c , max(a , b)) ;

	cout << minimum << " " << maximum << endl ;

	return 0 ;
}