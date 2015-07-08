#include<iostream>
#include<cmath>

using namespace std ; 

int main ()
{
	int m , n ,ans ;
	while (1){ 
		cin >> n >> m ; 
		if (n == -1 && m == -1)
			break ; 
		if (n>m){
			ans = ceil((double)n/(m+1)); 
		}
		else {
			ans = ceil ((double)m/(n+1)) ; 
		}
		cout << ans <<endl ; 
		
	}

return 0 ; 
}