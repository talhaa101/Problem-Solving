// Sheet #1 (Data type - Conditions)
// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/V

#include <iostream>
using namespace std ;

int main () {

	int a , b ;
#include <iostream>
	char ch ;

	cin >> a >> ch >> b ;

	switch (ch) 
	{
	case  '=' :
		{
			if (a == b ) cout << "Right" ;
			else cout << "Wrong" ;
			break ;
		}

	case  '>' :
		{
			if (a > b ) cout << "Right" ;
			else cout << "Wrong" ;
			break ;
		}
	case  '<' :
		{
			if (a < b ) cout << "Right" ;
			else cout << "Wrong" ;
			break ;
		}
	}


	return 0 ;
}