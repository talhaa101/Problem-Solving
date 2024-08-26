// Sheet #1 (Data type - Conditions)
// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/H
// https://www.mathsisfun.com/numbers/rounding-methods.html --> rounding method 
// https://www.mathsisfun.com/sets/function-floor-ceiling.html --> For Flooring and Ceiling method 

#include <iostream>
#include <cmath>
using namespace std ;

int main () {

	double  a , b ;

	cin >> a >> b ; 

	double result = a / b ;

	cout << "floor " << a  << " / " << b << " = " << floor(result) << endl ;
	cout << "ceil " << a  << " / " << b << " = " << ceil(result) << endl ;
	cout << "round " << a  << " / " << b << " = " << round(result) << endl ;

	return 0 ;
}