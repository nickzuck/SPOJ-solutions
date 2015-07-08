/*using Kadane's Algorith with some modifications */
/* the same algo gives TLE in python*/
#include<cstdio>
#include<algorithm>

#define MAX 3000002

using namespace std  ; 

int main ()
{

    long long int n ,m , a[MAX] , s , p , ans ;
    scanf ("%lld %lld",&n ,&m) ; 
    for (int j = 0 ;j <n ; j++)
	scanf ("%lld",&a[j]); 

    s =a[0] ;
    p = 0 ;
    ans = 0 ; 
    for (int i = 1 ; i<n ; i++){

	if (s <= m){
	    ans = max (ans , s) ;
            i+= 1 ;
	}
        else { 
	    p += 1 ;
  	    s -= a[p-1];
        }
printf("%lld\n",ans ); 

return 0 ; 
}