/*using Kadane's Algorith with some modifications */
/* the same algo gives TLE in python*/
#include<cstdio>
#include<algorithm>

#define MAX 300009

using namespace std  ; 

int main ()
{

    long long int n ,m , a[MAX] , s , p , ans, i  ;
    scanf ("%lld %lld",&n ,&m) ; 

    for (long long int j = 0 ;j <n ; j++)
	scanf ("%lld",&a[j]); 

    s =a[0] ;
    p = 0 ;
    ans = 0 ;
    i = 0 ; 
    while (i < n ){

	if (s <= m){
	    ans = max(ans , s) ;
            i ++ ;
	    s+= a[i];
	    //printf ("%lld %lld\n",ans , s ) ;  
	}

	else { 
	    p += 1 ;
  	    s -= a[p-1];
        }
        
    }

    printf("%lld\n",ans ); 

return 0 ; 
}