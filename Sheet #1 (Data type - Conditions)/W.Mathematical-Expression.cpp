// Sheet #1 (Data type - Conditions)
// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/W

#include<iostream>
using namespace std ;

int main () {

	int a , b ;
	long long c ;
	char ch1 , ch2;
	int result ;

	cin >> a >> ch1 >> b >> ch2 >> c ;

	if (ch1 == '+'){
		if (a + b == c){
			cout << "Yes" ;
		}
		

		else {
		cout << a + b ;
		}
	}


	else if (ch1 == '-'){
		if (a - b == c){
			cout << "Yes" ;	
		}
		
		else {
		cout << a - b ;
		}
	}


	else if (ch1 == '*'){
		if (a * b == c){
			cout << "Yes" ;
		}
		
		else {
		cout << a * b ;
		}
	}





	return 0 ;
}