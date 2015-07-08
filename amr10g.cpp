#include<cstdio>
#include<cmath>
#include<algorithm>

#define MAX 20002

using namespace std ; 

int main ()
{   
    long long int t , i , n, k  , arr[MAX] , ans , m ; 
    scanf ("%lld",&t) ; 
    while (t--){
        
	scanf("%lld %lld",&n ,&k) ; 
	for (i = 0 ;i<n ; i++){
	    scanf ("%lld",&arr[i]) ; 
	}
	
	sort(arr, arr+n) ; 
	if(k == 1){
		printf ("0\n") ; 
	}
	
	else{
	
	    ans = 0 ; m = 0 ; 
	
    	    for (i = 0 ;i<=(n-k) ; i++){
		ans = arr[i+k-1] - arr[i] ; 
		if (ans < m || i == 0 ){
		    m = ans ; 
		}
	    }
	    
	    printf ("%lld\n",m); 
	}
	
    }
return 0 ; 
}