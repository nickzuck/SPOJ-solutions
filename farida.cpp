#include<iostream>
#include<algorithm>

using namespace std ;
 
int main ()
{
	long long int arr[1002],t ,n ,dp[1002], i;

	cin >> t;
	
	for(int j = 1 ; j<=t ; j++)
	{
		cin >> n ; 
		//memset(dp , -1 , sizeof(dp)) ;
		for (i = 0 ; i<n ; i++)
			cin >> arr[i] ;  
	
		dp[0] = arr[0] ; 
		dp[1] = max(arr[1] , dp[0]) ;

		for (i = 2; i<n ; i++){
			dp[i] = max(dp[i-1],arr[i]+dp[i-2]) ; 
		}

		cout << "Case "<<j << ": "<<dp[n-1] <<endl ; 
	}  

return 0 ;	
}
