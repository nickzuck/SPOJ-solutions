//It is the nim game.. Actually (1,2,3,...9)-nim

#include<iostream>
#include<algorithm>

using namespace std ; 


int main ()
{
	long long int n ; 
	cin >> n ; 
	int temp = n  % 10 ; 
	if (temp != 0 ) //nikifor is the winner 
	{
		cout << "1\n" ; 
		cout << temp << endl; 	
	}	

	else 
		cout << "2\n" ; 
return 0 ; 
}
